#include "openxlsx2.h"

// [[Rcpp::export]]
SEXP readXMLPtr(std::string path, bool isfile) {

  xmldoc *doc = new xmldoc;
  pugi::xml_parse_result result;

  if (isfile) {
    result = doc->load_file(path.c_str(), pugi::parse_default | pugi::parse_escapes);
  } else {
    result = doc->load_string(path.c_str(), pugi::parse_default | pugi::parse_escapes);
  }

  if (!result) {
    Rcpp::stop("xml import unsuccessfull");
  }

  XPtrXML ptr(doc, true);
  ptr.attr("class") = Rcpp::CharacterVector::create("pugi_xml");
  return ptr;
}


// [[Rcpp::export]]
SEXP getXMLXPtr1(XPtrXML doc, std::string child) {

  std::vector<std::string> res;

  for (auto worksheet : doc->children(child.c_str()))
  {
    std::ostringstream oss;
    worksheet.print(oss, " ", pugi::format_raw);
    res.push_back(oss.str());
  }

  return  Rcpp::wrap(res);
}


// [[Rcpp::export]]
SEXP getXMLXPtr2(XPtrXML doc, std::string level1, std::string child) {

  std::vector<std::string> res;

  for (auto worksheet : doc->child(level1.c_str()).children(child.c_str()))
  {
    std::ostringstream oss;
    worksheet.print(oss, " ", pugi::format_raw);
    res.push_back(oss.str());
  }

  return  Rcpp::wrap(res);
}

// [[Rcpp::export]]
SEXP getXMLXPtr3(XPtrXML doc, std::string level1, std::string level2, std::string child) {

  std::vector<std::string> res;

  for (auto worksheet : doc->child(level1.c_str()).child(level2.c_str()).children(child.c_str()))
  {
    std::ostringstream oss;
    worksheet.print(oss, " ", pugi::format_raw);
    res.push_back(oss.str());
  }

  return  Rcpp::wrap(res);
}

// level2 is wildcard. (for border only color nodes are imported.
// Do not know why :'( )
// [[Rcpp::export]]
SEXP unkgetXMLXPtr3(XPtrXML doc, std::string level1, std::string child) {

  std::vector<std::string> res;

  for (auto worksheet : doc->child(level1.c_str()).children())
    for (auto cld : worksheet.children(child.c_str()))
    {
      std::ostringstream oss;
      cld.print(oss, " ", pugi::format_raw);
      res.push_back(oss.str());
    }

  return  Rcpp::wrap(res);
}

//nested list below level 3. eg:
//<level1>
//  <level2>
//    <level3>
//      <child />
//      x
//      <child />
//    </level3>
//    <level3>
//      <child />
//    </level3>
//  </level2>
//</level1>
// [[Rcpp::export]]
SEXP getXMLXPtr4(XPtrXML doc, std::string level1, std::string level2, std::string level3, std::string child) {

  std::vector<std::vector<std::string>> x;

  for (auto worksheet : doc->child(level1.c_str()).child(level2.c_str()).children(level3.c_str()))
  {
    std::vector<std::string> y;

    for (auto col : worksheet.children(child.c_str()))
    {
      std::ostringstream oss;
      col.print(oss, " ", pugi::format_raw);

      y.push_back(oss.str());
    }

    x.push_back(y);
  }

  return  Rcpp::wrap(x);
}

// nested list below level 3. eg:
// <level1>
//  <level2>
//    <level3>
//      <level4 />
//        <child>
//        x
//        </child>
//        <child>
//        y
//        </child>
//      <level4 />
//    </level3>
//    <level3>
//      <level4 />
//    </level3>
//  </level2>
//</level1>
// [[Rcpp::export]]
SEXP getXMLXPtr5(XPtrXML doc, std::string level1, std::string level2, std::string level3, std::string level4, std::string child) {

  std::vector<std::vector<std::vector<std::string>>> x;

  for (auto worksheet : doc->child(level1.c_str()).child(level2.c_str()).children(level3.c_str()))
  {
    std::vector<std::vector<std::string>> y;

    for (auto col : worksheet.children(level4.c_str()))
    {
      std::vector<std::string> z;

      for (auto val : col.children(child.c_str()))
      {
        std::ostringstream oss;
        val.print(oss, " ", pugi::format_raw);
        z.push_back(oss.str());
      }

      y.push_back(z);
    }

    x.push_back(y);
  }

  return  Rcpp::wrap(x);
}

// [[Rcpp::export]]
SEXP getXMLXPtr1val(XPtrXML doc, std::string child) {

  // returns a single vector, not a list of vectors!
  std::vector<std::string> x;

  for (auto worksheet : doc->children(child.c_str()))
  {
    std::vector<std::string> y;
    x.push_back( worksheet.child_value() );
  }

  return  Rcpp::wrap(x);
}

// [[Rcpp::export]]
SEXP getXMLXPtr2val(XPtrXML doc, std::string level1, std::string child) {

  // returns a single vector, not a list of vectors!
  std::vector<std::string> x;

  for (auto worksheet : doc->children(level1.c_str()))
  {
    std::vector<std::string> y;

    pugi::xml_node col = worksheet.child(child.c_str());
    x.push_back(col.child_value() );

  }

  return  Rcpp::wrap(x);
}

// [[Rcpp::export]]
SEXP getXMLXPtr3val(XPtrXML doc, std::string level1, std::string level2, std::string child) {

  // returns a single vector, not a list of vectors!
  std::vector<std::string> x;

  for (auto worksheet : doc->child(level1.c_str()).children(level2.c_str()))
  {
    std::vector<std::string> y;

    pugi::xml_node col = worksheet.child(child.c_str());

    x.push_back(col.child_value() );
  }

  return  Rcpp::wrap(x);
}

// [[Rcpp::export]]
SEXP getXMLXPtr4val(XPtrXML doc, std::string level1, std::string level2, std::string level3, std::string child) {

  // returns a list of vectors!
  std::vector<std::vector<std::string>> x;

  for (auto worksheet : doc->child(level1.c_str()).child(level2.c_str()).children(level3.c_str()))
  {
    std::vector<std::string> y;

    for (auto col : worksheet.child(child.c_str()))
    {
      y.push_back(col.child_value() );
    }

    x.push_back(y);
  }

  return  Rcpp::wrap(x);
}

// [[Rcpp::export]]
SEXP getXMLXPtr5val(XPtrXML doc, std::string level1, std::string level2, std::string level3, std::string level4, std::string child) {

  auto worksheet = doc->child(level1.c_str()).child(level2.c_str());
  size_t n = std::distance(worksheet.begin(), worksheet.end());
  auto itr_rows = 0;
  Rcpp::List x(n);

  for (auto worksheet : doc->child(level1.c_str()).child(level2.c_str()).children(level3.c_str()))
  {
    size_t k = std::distance(worksheet.begin(), worksheet.end());
    auto itr_cols = 0;
    Rcpp::List y(k);

    std::vector<std::string> nam;

    for (auto col : worksheet.children(level4.c_str()))
    {
      Rcpp::CharacterVector z;

      // get r attr e.g. "A1"
      std::string colrow = col.attribute("r").value();
      // remove numeric from string
      colrow.erase(std::remove_if(colrow.begin(),
                                  colrow.end(),
                                  &isdigit),
                                  colrow.end());
      nam.push_back(colrow);

      for (auto val : col.children(child.c_str()))
      {
        std::string val_s = "";
        // is node contains additional t node.
        // TODO: check if multiple t nodes are possible, for now return only one.
        if (val.child("t")) {
          pugi::xml_node tval = val.child("t");
          val_s = tval.child_value();
        } else {
          val_s = val.child_value();
        }

        z.push_back( val_s );
      }

      y[itr_cols]= z;
      ++itr_cols;
    }

    y.attr("names") = nam;

    x[itr_rows] = y;
    ++itr_rows;
  }

  return  Rcpp::wrap(x);
}


// [[Rcpp::export]]
SEXP getXMLXPtr1attr(XPtrXML doc, std::string child) {


  pugi::xml_node worksheet = doc->child(child.c_str());
  size_t n = std::distance(worksheet.begin(), worksheet.end());

  // for a childless single line node the distance might be zero
  if (n == 0) n++;

  Rcpp::List z(n);

  auto itr = 0;

  Rcpp::CharacterVector res;
  std::vector<std::string> nam;

  for (auto attrs : worksheet.attributes())
  {
    nam.push_back(attrs.name());
    res.push_back(attrs.value());
  }

  // assign names
  res.attr("names") = nam;

  z[itr] = res;
  ++itr;

  return  Rcpp::wrap(z);
}

// [[Rcpp::export]]
Rcpp::List getXMLXPtr2attr(XPtrXML doc, std::string level1, std::string child) {

  auto worksheet = doc->child(level1.c_str()).children(child.c_str());
  auto n = std::distance(worksheet.begin() , worksheet.end());
  Rcpp::List z(n);

  auto itr = 0;
  for (auto ws : doc->child(level1.c_str()).children(child.c_str()))
  {

    auto n = std::distance(ws.attributes_begin(), ws.attributes_end());

    Rcpp::List res(n);
    Rcpp::CharacterVector nam(n);

    auto attr_itr = 0;
    for (auto attr : ws.attributes())
    {
      nam[attr_itr] = attr.name();
      res[attr_itr] = attr.value();
      ++attr_itr;
    }

    // assign names
    res.attr("names") = nam;

    z[itr] = res;
    ++itr;
  }

  return z;
}

// [[Rcpp::export]]
SEXP getXMLXPtr3attr(XPtrXML doc, std::string level1, std::string level2, std::string child) {

  auto worksheet = doc->child(level1.c_str()).child(level2.c_str()).children(child.c_str());
  auto n = std::distance(worksheet.begin(), worksheet.end());
  Rcpp::List z(n);

  auto itr = 0;
  for (auto ws : doc->child(level1.c_str()).child(level2.c_str()).children(child.c_str()))
  {

    auto n = std::distance(ws.attributes_begin(), ws.attributes_end());

    Rcpp::List res(n);
    Rcpp::CharacterVector nam(n);

    auto attr_itr = 0;
    for (auto attr : ws.attributes())
    {
      nam[attr_itr] = attr.name();
      res[attr_itr] = attr.value();
      ++attr_itr;
    }

    // assign names
    res.attr("names") = nam;

    z[itr] = res;
    ++itr;
  }

  return z;
}


// nested list below level 3. eg:
// <worksheet>
//  <sheetData>
//    <row>
//      <c />
//      <c />
//    </row>
//    <row>
//      <c />
//    </row>
//  </sheetData>
//</worksheet>
// [[Rcpp::export]]
Rcpp::List getXMLXPtr4attr(XPtrXML doc, std::string level1, std::string level2, std::string level3, std::string child) {

  auto worksheet = doc->child(level1.c_str()).child(level2.c_str());

  size_t n = std::distance(worksheet.begin(), worksheet.end());
  Rcpp::List z(n);
  auto itr_rows = 0;

  for (auto ws : worksheet.children(level3.c_str()))
  {
    size_t k = std::distance(ws.begin(), ws.end());
    auto itr_cols = 0;
    Rcpp::List y(k);

    for (auto row : ws.children(child.c_str()))
    {
      size_t j = std::distance(row.attributes_begin(), row.attributes_end());
        Rcpp::List res(j);
        auto attr_itr = 0;

        Rcpp::CharacterVector nam(j);

        for (auto attr : row.attributes())
        {
          nam[attr_itr] = attr.name();
          res[attr_itr] = attr.value();
          ++attr_itr;
        }

        // assign names
        res.attr("names") = nam;

        y[itr_cols] = res;
        ++itr_cols;
    }

    z[itr_rows] = y;
    ++itr_rows;
  }

  return z;
}

// nested list below level 3. eg:
// <level1>
//  <level2>
//    <level3>
//      <level4 />
//        <child>
//        x
//        </child>
//        <child>
//        y
//        </child>
//      <level4 />
//    </level3>
//    <level3>
//      <level4 />
//    </level3>
//  </level2>
//</level1>
// [[Rcpp::export]]
SEXP getXMLXPtr5attr(XPtrXML doc, std::string level1, std::string level2, std::string level3, std::string level4, std::string child) {

  auto rows = doc->child(level1.c_str()).child(level2.c_str()).child(level3.c_str());

  size_t n = std::distance(rows.begin(), rows.end());
  Rcpp::List z(n);
  auto itr_rows = 0;

  for (auto ws : doc->child(level1.c_str()).child(level2.c_str()).child(level3.c_str()).children(level4.c_str()))
  {
    size_t k = std::distance(ws.begin(), ws.end());
    Rcpp::List y(k);
    auto itr_cols = 0;

    for (auto row : ws.children(child.c_str()))
    {
      size_t j = std::distance(row.begin(), row.end());
      Rcpp::List res(j);
      auto attr_itr = 0;

      Rcpp::CharacterVector nam(j);

      for (auto attr : row.attributes())
      {
        if (attr.value() != NULL) {
          nam[attr_itr] = attr.name();
          res[attr_itr] = attr.value();
        } else {
          res[attr_itr] = "";
        }
        ++attr_itr;
      }

      // assign names
      res.attr("names") = nam;

      y[itr_cols] = res;
      ++itr_cols;
    }

    z[itr_rows] = y;
    ++itr_rows;
  }

  return  Rcpp::wrap(z);
}

// [[Rcpp::export]]
Rcpp::CharacterVector getXMLXPtr1attr_one(XPtrXML doc, std::string child, std::string attrname) {

  std::vector<std::string> z;

  for (auto worksheet : doc->children(child.c_str()))
  {
    pugi::xml_attribute attr = worksheet.attribute(attrname.c_str());

    if (attr.value() != NULL) {
      z.push_back(attr.value());
    } else {
      z.push_back("");
    }
  }

  return  Rcpp::wrap(z);
}

// [[Rcpp::export]]
Rcpp::CharacterVector getXMLXPtr2attr_one(XPtrXML doc, std::string level1, std::string child, std::string attrname) {

  std::vector<std::string> z;

  for (auto worksheet : doc->child(level1.c_str()).child(child.c_str()))
  {
    pugi::xml_attribute attr = worksheet.attribute(attrname.c_str());

    if (attr.value() != NULL) {
      z.push_back(attr.value());
    } else {
      z.push_back("");
    }
  }

  return  Rcpp::wrap(z);
}

// [[Rcpp::export]]
Rcpp::CharacterVector getXMLXPtr3attr_one(XPtrXML doc, std::string level1, std::string level2, std::string child, std::string attrname) {

  std::vector<std::string> z;

  for (auto worksheet : doc->child(level1.c_str()).child(level2.c_str()).children(child.c_str()))
  {
    pugi::xml_attribute attr = worksheet.attribute(attrname.c_str());

    if (attr.value() != NULL) {
      z.push_back(attr.value());
    } else {
      z.push_back("");
    }
  }

  return  Rcpp::wrap(z);
}


// nested list below level 3. eg:
// <level1>
//  <level2>
//    <level3>
//      <child attrname=""/>
//      <child />
//    </level3>
//    <level3>
//      <child />
//    </level3>
//  </level2>
//</level1
// [[Rcpp::export]]
SEXP getXMLXPtr4attr_one(XPtrXML doc, std::string level1, std::string level2, std::string level3, std::string child, std::string attrname) {

  std::vector<std::vector<std::string>> z;

  for (auto worksheet : doc->child(level1.c_str()).child(level2.c_str()).children(level3.c_str()))
  {
    std::vector<std::string> y;

    for (auto row : worksheet.children(child.c_str()))
    {
      pugi::xml_attribute attr = row.attribute(attrname.c_str());

      if (attr.value() != NULL) {
        y.push_back(attr.value());
      } else {
        y.push_back("");
      }
    }

    z.push_back(y);
  }

  return  Rcpp::wrap(z);
}

// specially designed for <fonts>
// [[Rcpp::export]]
SEXP font_val(Rcpp::CharacterVector fonts, std::string level3, std::string child) {

  Rcpp::List z;
  Rcpp::CharacterVector names;

  for (auto i = 0; i < fonts.length(); ++i) {

    std::string xml_string = Rcpp::as<std::string>(fonts[i]);
    pugi::xml_document doc;
    pugi::xml_parse_result result = doc.load_string(xml_string.c_str(),
                                                    pugi::parse_default | pugi::parse_escapes);
    if (!result) {
      Rcpp::stop("xml import unsuccessfull");
    }

    for (auto l3 : doc.children(level3.c_str())) {
      for (auto cld : l3.children(child.c_str())) {

        for (auto attrs : cld.attributes()) {

          if (attrs.value() != NULL) {
            z.push_back(attrs.value());
          } else {
            z.push_back("");
          }
          names.push_back(attrs.name());
        }

      }
    }

  }

  z.attr("names") = names;

  return Rcpp::wrap(z);
}


// specially designed for <fonts>
// [[Rcpp::export]]
SEXP style_xml_as_list(Rcpp::CharacterVector xml_input, std::string level3) {

  Rcpp::List z(xml_input.length());

  for (auto i = 0; i < xml_input.length(); ++i) {

    Rcpp::List zi;
    Rcpp::CharacterVector names;

    std::string xml_string = Rcpp::as<std::string>(xml_input[i]);
    pugi::xml_document doc;
    pugi::xml_parse_result result = doc.load_string(xml_string.c_str(), pugi::parse_default | pugi::parse_escapes);
    if (!result) {
      Rcpp::stop("xml import unsuccessfull");
    }


    for (auto l3 : doc.children(level3.c_str())) {
      for (auto cld : l3.children()) {

        for (auto attrs : cld.attributes()) {
          if (attrs.value() != NULL) {
            zi.push_back(attrs.value());
          } else {
            zi.push_back("");
          }
          names.push_back(attrs.name());
        }

      }

      zi.attr("names") = names;
    }

    z[i] = zi;
  }

  return Rcpp::wrap(z);
}



// [[Rcpp::export]]
std::string printXPtr(XPtrXML doc, bool raw) {

  std::ostringstream oss;
  if (raw) {
    doc->print(oss, " ", pugi::format_raw);
  } else {
    doc->print(oss);
  }

  return  oss.str();
}



// [[Rcpp::export]]
void write_xml_file(std::string xml_content, std::string fl) {

  pugi::xml_document doc;
  pugi::xml_parse_result result;

  // load and validate node
  if (xml_content != "") {
    result = doc.load_string(xml_content.c_str(), pugi::parse_default | pugi::parse_escapes);
    if (!result) Rcpp::stop("Loading xml_content node failed: \n %s \n When writing: \n%s", xml_content, fl);
  }

  // Needs to be added after the node has been loaded and validated
  pugi::xml_node decl = doc.prepend_child(pugi::node_declaration);
  decl.append_attribute("version") = "1.0";
  decl.append_attribute("encoding") = "UTF-8";
  decl.append_attribute("standalone") = "yes";

  doc.save_file(fl.c_str(), "\t", pugi::format_raw );

}

//' adds or updates attribute(s) in existing xml node
//'
//' @description Needs xml node and named character vector as input. Modifies
//' the argutments of each first child found in the xml node and adds or updates
//' the attribute vector.
//' @details If a named attribute in `xml_attributes` is "" remove the attribute
//' from the node.
//' If `xml_attributes` contains a named entry found in the xml node, it is
//' updated else it is added as attribute.
//'
//' @param xml_content some valid xml_node
//' @param xml_attributes R vector of named attributes
//'
//' @examples
//'   # add single node
//'     xml_node <- "<a foo=\"bar\">openxlsx2</a><b />"
//'     xml_attr <- c(qux = "quux")
//'     # "<a foo=\"bar\" qux=\"quux\">openxlsx2</a><b qux=\"quux\"/>"
//'     xml_attr_mod(xml_node, xml_attr)
//'
//'   # update node and add node
//'     xml_node <- "<a foo=\"bar\">openxlsx2</a><b />"
//'     xml_attr <- c(foo = "baz", qux = "quux")
//'     # "<a foo=\"baz\" qux=\"quux\">openxlsx2</a><b foo=\"baz\" qux=\"quux\"/>"
//'     xml_attr_mod(xml_node, xml_attr)
//'
//'   # remove node and add node
//'     xml_node <- "<a foo=\"bar\">openxlsx2</a><b />"
//'     xml_attr <- c(foo = "", qux = "quux")
//'     # "<a qux=\"quux\">openxlsx2</a><b qux=\"quux\"/>"
//'     xml_attr_mod(xml_node, xml_attr)
//' @export
// [[Rcpp::export]]
Rcpp::CharacterVector xml_attr_mod(std::string xml_content, Rcpp::CharacterVector xml_attributes) {

  pugi::xml_document doc;
  pugi::xml_parse_result result;

  // load and validate node
  if (xml_content != "") {
    result = doc.load_string(xml_content.c_str(), pugi::parse_default | pugi::parse_escapes);
    if (!result) Rcpp::stop("Loading xml_content node failed: \n %s ", xml_content);
  }

  std::vector<std::string> new_attr_nam = xml_attributes.names();
  std::vector<std::string> new_attr_val = Rcpp::as<std::vector<std::string>>(xml_attributes);

  for (auto cld : doc.children()) {
    for (auto i = 0; i < xml_attributes.length(); ++i){

      // check if attribute_val is empty. if yes, remove the attribute.
      // otherwise add or update the attribute
      if (new_attr_val[i] == "") {
        cld.remove_attribute(new_attr_nam[i].c_str());
      } else {
        // update attribute if found else add attribute
        if (cld.attribute(new_attr_nam[i].c_str())) {
          cld.attribute(new_attr_nam[i].c_str()).set_value(new_attr_val[i].c_str());
        } else {
          cld.append_attribute(new_attr_nam[i].c_str()) = new_attr_val[i].c_str();
        }
      }
    }
  }

  std::ostringstream oss;
  doc.print(oss, " ", pugi::format_raw);

  return oss.str();
}

//' create xml_node from R objects
//' @description takes xml_name, xml_children and xml_attributes to create a new
//' xml_node.
//' @param xml_name the name of the new xml_node
//' @param xml_children character vector children attached to the xml_node
//' @param xml_attributes named character vector of attributes for the xml_node
//' @details if xml_children or xml_attributes should be empty, use NULL
//'
//' @examples
//' xml_name <- "a"
//' # "<a/>"
//' xml_node_create(xml_name)
//'
//' xml_child <- "openxlsx"
//' # "<a>openxlsx</a>"
//' xml_node_create(xml_name, xml_children = xml_child)
//'
//' xml_attr <- c(foo = "baz", qux = "quux")
//' # "<a foo=\"baz\" qux=\"quux\"/>"
//' xml_node_create(xml_name, xml_attributes = xml_attr)
//'
//' # "<a foo=\"baz\" qux=\"quux\">openxlsx</a>"
//' xml_node_create(xml_name, xml_children = xml_child, xml_attributes = xml_attr)
//' @export
// [[Rcpp::export]]
Rcpp::CharacterVector xml_node_create(
    std::string xml_name,
    Rcpp::Nullable<Rcpp::CharacterVector> xml_children = R_NilValue,
    Rcpp::Nullable<Rcpp::CharacterVector> xml_attributes = R_NilValue) {

  pugi::xml_document doc;
  pugi::xml_parse_result result;

  pugi::xml_node cld = doc.append_child(xml_name.c_str());

  // check if children are attached
  if (xml_children.isNotNull()) {

    Rcpp::CharacterVector xml_child(xml_children.get());

    for (auto i = 0; i < xml_child.size(); ++i) {

      std::string xml_cld = Rcpp::as<std::string>(xml_child[i]);

      pugi::xml_document is_node;
      pugi::xml_parse_result result = is_node.load_string(xml_cld.c_str(), pugi::parse_default | pugi::parse_escapes);

      // check if result is a valid xml_node, else append as is
      if (result) {
        cld.append_copy(is_node.first_child());
      } else {
        cld.append_child(pugi::node_pcdata).set_value(xml_cld.c_str());
      }
    }
  }

  // check if attributes are attached
  if (xml_attributes.isNotNull()) {

    Rcpp::CharacterVector xml_attr(xml_attributes.get());

    std::vector<std::string> new_attr_nam = xml_attr.names();
    std::vector<std::string> new_attr_val = Rcpp::as<std::vector<std::string>>(xml_attr);

    for (auto i = 0; i < xml_attr.length(); ++i){
      cld.append_attribute(new_attr_nam[i].c_str()) = new_attr_val[i].c_str();
    }
  }

  std::ostringstream oss;
  doc.print(oss, " ", pugi::format_raw);
  std::string xml_return = oss.str();

  return xml_return;
}
