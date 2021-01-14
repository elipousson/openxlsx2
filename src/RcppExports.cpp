// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "openxlsx_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// getXML1
SEXP getXML1(std::string str, std::string child);
RcppExport SEXP _openxlsx_getXML1(SEXP strSEXP, SEXP childSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type str(strSEXP);
    Rcpp::traits::input_parameter< std::string >::type child(childSEXP);
    rcpp_result_gen = Rcpp::wrap(getXML1(str, child));
    return rcpp_result_gen;
END_RCPP
}
// getXML2
SEXP getXML2(std::string str, std::string level1, std::string child);
RcppExport SEXP _openxlsx_getXML2(SEXP strSEXP, SEXP level1SEXP, SEXP childSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type str(strSEXP);
    Rcpp::traits::input_parameter< std::string >::type level1(level1SEXP);
    Rcpp::traits::input_parameter< std::string >::type child(childSEXP);
    rcpp_result_gen = Rcpp::wrap(getXML2(str, level1, child));
    return rcpp_result_gen;
END_RCPP
}
// getXML3
SEXP getXML3(std::string str, std::string level1, std::string level2, std::string child);
RcppExport SEXP _openxlsx_getXML3(SEXP strSEXP, SEXP level1SEXP, SEXP level2SEXP, SEXP childSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type str(strSEXP);
    Rcpp::traits::input_parameter< std::string >::type level1(level1SEXP);
    Rcpp::traits::input_parameter< std::string >::type level2(level2SEXP);
    Rcpp::traits::input_parameter< std::string >::type child(childSEXP);
    rcpp_result_gen = Rcpp::wrap(getXML3(str, level1, level2, child));
    return rcpp_result_gen;
END_RCPP
}
// getXMLattr
SEXP getXMLattr(std::vector<std::string> strs, std::string child);
RcppExport SEXP _openxlsx_getXMLattr(SEXP strsSEXP, SEXP childSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type strs(strsSEXP);
    Rcpp::traits::input_parameter< std::string >::type child(childSEXP);
    rcpp_result_gen = Rcpp::wrap(getXMLattr(strs, child));
    return rcpp_result_gen;
END_RCPP
}
// calc_column_widths
SEXP calc_column_widths(Reference sheet_data, std::vector<std::string> sharedStrings, IntegerVector autoColumns, NumericVector widths, float baseFontCharWidth, float minW, float maxW);
RcppExport SEXP _openxlsx_calc_column_widths(SEXP sheet_dataSEXP, SEXP sharedStringsSEXP, SEXP autoColumnsSEXP, SEXP widthsSEXP, SEXP baseFontCharWidthSEXP, SEXP minWSEXP, SEXP maxWSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Reference >::type sheet_data(sheet_dataSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type sharedStrings(sharedStringsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type autoColumns(autoColumnsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type widths(widthsSEXP);
    Rcpp::traits::input_parameter< float >::type baseFontCharWidth(baseFontCharWidthSEXP);
    Rcpp::traits::input_parameter< float >::type minW(minWSEXP);
    Rcpp::traits::input_parameter< float >::type maxW(maxWSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_column_widths(sheet_data, sharedStrings, autoColumns, widths, baseFontCharWidth, minW, maxW));
    return rcpp_result_gen;
END_RCPP
}
// convert_to_excel_ref
SEXP convert_to_excel_ref(IntegerVector cols, std::vector<std::string> LETTERS);
RcppExport SEXP _openxlsx_convert_to_excel_ref(SEXP colsSEXP, SEXP LETTERSSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type cols(colsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type LETTERS(LETTERSSEXP);
    rcpp_result_gen = Rcpp::wrap(convert_to_excel_ref(cols, LETTERS));
    return rcpp_result_gen;
END_RCPP
}
// convert_from_excel_ref
IntegerVector convert_from_excel_ref(CharacterVector x);
RcppExport SEXP _openxlsx_convert_from_excel_ref(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(convert_from_excel_ref(x));
    return rcpp_result_gen;
END_RCPP
}
// convert_to_excel_ref_expand
SEXP convert_to_excel_ref_expand(const std::vector<int>& cols, const std::vector<std::string>& LETTERS, const std::vector<std::string>& rows);
RcppExport SEXP _openxlsx_convert_to_excel_ref_expand(SEXP colsSEXP, SEXP LETTERSSEXP, SEXP rowsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<int>& >::type cols(colsSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type LETTERS(LETTERSSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type rows(rowsSEXP);
    rcpp_result_gen = Rcpp::wrap(convert_to_excel_ref_expand(cols, LETTERS, rows));
    return rcpp_result_gen;
END_RCPP
}
// isInternalHyperlink
LogicalVector isInternalHyperlink(CharacterVector x);
RcppExport SEXP _openxlsx_isInternalHyperlink(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(isInternalHyperlink(x));
    return rcpp_result_gen;
END_RCPP
}
// write_file
SEXP write_file(std::string head, std::string body, std::string tail, std::string fl);
RcppExport SEXP _openxlsx_write_file(SEXP headSEXP, SEXP bodySEXP, SEXP tailSEXP, SEXP flSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type head(headSEXP);
    Rcpp::traits::input_parameter< std::string >::type body(bodySEXP);
    Rcpp::traits::input_parameter< std::string >::type tail(tailSEXP);
    Rcpp::traits::input_parameter< std::string >::type fl(flSEXP);
    rcpp_result_gen = Rcpp::wrap(write_file(head, body, tail, fl));
    return rcpp_result_gen;
END_RCPP
}
// cppReadFile
std::string cppReadFile(std::string xmlFile);
RcppExport SEXP _openxlsx_cppReadFile(SEXP xmlFileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type xmlFile(xmlFileSEXP);
    rcpp_result_gen = Rcpp::wrap(cppReadFile(xmlFile));
    return rcpp_result_gen;
END_RCPP
}
// read_file_newline
std::string read_file_newline(std::string xmlFile);
RcppExport SEXP _openxlsx_read_file_newline(SEXP xmlFileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type xmlFile(xmlFileSEXP);
    rcpp_result_gen = Rcpp::wrap(read_file_newline(xmlFile));
    return rcpp_result_gen;
END_RCPP
}
// get_letters
std::vector<std::string> get_letters();
RcppExport SEXP _openxlsx_get_letters() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(get_letters());
    return rcpp_result_gen;
END_RCPP
}
// markUTF8
CharacterVector markUTF8(CharacterVector x, bool clone);
RcppExport SEXP _openxlsx_markUTF8(SEXP xSEXP, SEXP cloneSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type clone(cloneSEXP);
    rcpp_result_gen = Rcpp::wrap(markUTF8(x, clone));
    return rcpp_result_gen;
END_RCPP
}
// loadworksheets
SEXP loadworksheets(Reference wb, List styleObjects, std::vector<std::string> xmlFiles, LogicalVector is_chart_sheet);
RcppExport SEXP _openxlsx_loadworksheets(SEXP wbSEXP, SEXP styleObjectsSEXP, SEXP xmlFilesSEXP, SEXP is_chart_sheetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Reference >::type wb(wbSEXP);
    Rcpp::traits::input_parameter< List >::type styleObjects(styleObjectsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type xmlFiles(xmlFilesSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type is_chart_sheet(is_chart_sheetSEXP);
    rcpp_result_gen = Rcpp::wrap(loadworksheets(wb, styleObjects, xmlFiles, is_chart_sheet));
    return rcpp_result_gen;
END_RCPP
}
// getNodes
SEXP getNodes(std::string xml, std::string tagIn);
RcppExport SEXP _openxlsx_getNodes(SEXP xmlSEXP, SEXP tagInSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type xml(xmlSEXP);
    Rcpp::traits::input_parameter< std::string >::type tagIn(tagInSEXP);
    rcpp_result_gen = Rcpp::wrap(getNodes(xml, tagIn));
    return rcpp_result_gen;
END_RCPP
}
// getOpenClosedNode
SEXP getOpenClosedNode(std::string xml, std::string open_tag, std::string close_tag);
RcppExport SEXP _openxlsx_getOpenClosedNode(SEXP xmlSEXP, SEXP open_tagSEXP, SEXP close_tagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type xml(xmlSEXP);
    Rcpp::traits::input_parameter< std::string >::type open_tag(open_tagSEXP);
    Rcpp::traits::input_parameter< std::string >::type close_tag(close_tagSEXP);
    rcpp_result_gen = Rcpp::wrap(getOpenClosedNode(xml, open_tag, close_tag));
    return rcpp_result_gen;
END_RCPP
}
// getAttr
SEXP getAttr(CharacterVector x, std::string tag);
RcppExport SEXP _openxlsx_getAttr(SEXP xSEXP, SEXP tagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type tag(tagSEXP);
    rcpp_result_gen = Rcpp::wrap(getAttr(x, tag));
    return rcpp_result_gen;
END_RCPP
}
// getChildlessNode_ss
std::vector<std::string> getChildlessNode_ss(std::string xml, std::string tag);
RcppExport SEXP _openxlsx_getChildlessNode_ss(SEXP xmlSEXP, SEXP tagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type xml(xmlSEXP);
    Rcpp::traits::input_parameter< std::string >::type tag(tagSEXP);
    rcpp_result_gen = Rcpp::wrap(getChildlessNode_ss(xml, tag));
    return rcpp_result_gen;
END_RCPP
}
// getChildlessNode
CharacterVector getChildlessNode(std::string xml, std::string tag);
RcppExport SEXP _openxlsx_getChildlessNode(SEXP xmlSEXP, SEXP tagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type xml(xmlSEXP);
    Rcpp::traits::input_parameter< std::string >::type tag(tagSEXP);
    rcpp_result_gen = Rcpp::wrap(getChildlessNode(xml, tag));
    return rcpp_result_gen;
END_RCPP
}
// get_extLst_Major
CharacterVector get_extLst_Major(std::string xml);
RcppExport SEXP _openxlsx_get_extLst_Major(SEXP xmlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type xml(xmlSEXP);
    rcpp_result_gen = Rcpp::wrap(get_extLst_Major(xml));
    return rcpp_result_gen;
END_RCPP
}
// cell_ref_to_col
int cell_ref_to_col(std::string x);
RcppExport SEXP _openxlsx_cell_ref_to_col(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cell_ref_to_col(x));
    return rcpp_result_gen;
END_RCPP
}
// int_2_cell_ref
CharacterVector int_2_cell_ref(IntegerVector cols);
RcppExport SEXP _openxlsx_int_2_cell_ref(SEXP colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type cols(colsSEXP);
    rcpp_result_gen = Rcpp::wrap(int_2_cell_ref(cols));
    return rcpp_result_gen;
END_RCPP
}
// readXMLPtr
SEXP readXMLPtr(std::string path);
RcppExport SEXP _openxlsx_readXMLPtr(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(readXMLPtr(path));
    return rcpp_result_gen;
END_RCPP
}
// getXMLXPtr1
SEXP getXMLXPtr1(XPtrXML doc, std::string child);
RcppExport SEXP _openxlsx_getXMLXPtr1(SEXP docSEXP, SEXP childSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type child(childSEXP);
    rcpp_result_gen = Rcpp::wrap(getXMLXPtr1(doc, child));
    return rcpp_result_gen;
END_RCPP
}
// getXMLXPtr2
SEXP getXMLXPtr2(XPtrXML doc, std::string level1, std::string child);
RcppExport SEXP _openxlsx_getXMLXPtr2(SEXP docSEXP, SEXP level1SEXP, SEXP childSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type level1(level1SEXP);
    Rcpp::traits::input_parameter< std::string >::type child(childSEXP);
    rcpp_result_gen = Rcpp::wrap(getXMLXPtr2(doc, level1, child));
    return rcpp_result_gen;
END_RCPP
}
// getXMLXPtr3
SEXP getXMLXPtr3(XPtrXML doc, std::string level1, std::string level2, std::string child);
RcppExport SEXP _openxlsx_getXMLXPtr3(SEXP docSEXP, SEXP level1SEXP, SEXP level2SEXP, SEXP childSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type level1(level1SEXP);
    Rcpp::traits::input_parameter< std::string >::type level2(level2SEXP);
    Rcpp::traits::input_parameter< std::string >::type child(childSEXP);
    rcpp_result_gen = Rcpp::wrap(getXMLXPtr3(doc, level1, level2, child));
    return rcpp_result_gen;
END_RCPP
}
// getXMLXPtr4
SEXP getXMLXPtr4(XPtrXML doc, std::string level1, std::string level2, std::string level3, std::string child);
RcppExport SEXP _openxlsx_getXMLXPtr4(SEXP docSEXP, SEXP level1SEXP, SEXP level2SEXP, SEXP level3SEXP, SEXP childSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type level1(level1SEXP);
    Rcpp::traits::input_parameter< std::string >::type level2(level2SEXP);
    Rcpp::traits::input_parameter< std::string >::type level3(level3SEXP);
    Rcpp::traits::input_parameter< std::string >::type child(childSEXP);
    rcpp_result_gen = Rcpp::wrap(getXMLXPtr4(doc, level1, level2, level3, child));
    return rcpp_result_gen;
END_RCPP
}
// getXMLXPtr5
SEXP getXMLXPtr5(XPtrXML doc, std::string level1, std::string level2, std::string level3, std::string level4, std::string child);
RcppExport SEXP _openxlsx_getXMLXPtr5(SEXP docSEXP, SEXP level1SEXP, SEXP level2SEXP, SEXP level3SEXP, SEXP level4SEXP, SEXP childSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type level1(level1SEXP);
    Rcpp::traits::input_parameter< std::string >::type level2(level2SEXP);
    Rcpp::traits::input_parameter< std::string >::type level3(level3SEXP);
    Rcpp::traits::input_parameter< std::string >::type level4(level4SEXP);
    Rcpp::traits::input_parameter< std::string >::type child(childSEXP);
    rcpp_result_gen = Rcpp::wrap(getXMLXPtr5(doc, level1, level2, level3, level4, child));
    return rcpp_result_gen;
END_RCPP
}
// getXMLXPtr3attr
SEXP getXMLXPtr3attr(XPtrXML doc, std::string level1, std::string level2, std::string child);
RcppExport SEXP _openxlsx_getXMLXPtr3attr(SEXP docSEXP, SEXP level1SEXP, SEXP level2SEXP, SEXP childSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type level1(level1SEXP);
    Rcpp::traits::input_parameter< std::string >::type level2(level2SEXP);
    Rcpp::traits::input_parameter< std::string >::type child(childSEXP);
    rcpp_result_gen = Rcpp::wrap(getXMLXPtr3attr(doc, level1, level2, child));
    return rcpp_result_gen;
END_RCPP
}
// getXMLXPtr4attr
SEXP getXMLXPtr4attr(XPtrXML doc, std::string level1, std::string level2, std::string level3, std::string child);
RcppExport SEXP _openxlsx_getXMLXPtr4attr(SEXP docSEXP, SEXP level1SEXP, SEXP level2SEXP, SEXP level3SEXP, SEXP childSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type level1(level1SEXP);
    Rcpp::traits::input_parameter< std::string >::type level2(level2SEXP);
    Rcpp::traits::input_parameter< std::string >::type level3(level3SEXP);
    Rcpp::traits::input_parameter< std::string >::type child(childSEXP);
    rcpp_result_gen = Rcpp::wrap(getXMLXPtr4attr(doc, level1, level2, level3, child));
    return rcpp_result_gen;
END_RCPP
}
// getXMLXPtr5attr
SEXP getXMLXPtr5attr(XPtrXML doc, std::string level1, std::string level2, std::string level3, std::string level4, std::string child);
RcppExport SEXP _openxlsx_getXMLXPtr5attr(SEXP docSEXP, SEXP level1SEXP, SEXP level2SEXP, SEXP level3SEXP, SEXP level4SEXP, SEXP childSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type level1(level1SEXP);
    Rcpp::traits::input_parameter< std::string >::type level2(level2SEXP);
    Rcpp::traits::input_parameter< std::string >::type level3(level3SEXP);
    Rcpp::traits::input_parameter< std::string >::type level4(level4SEXP);
    Rcpp::traits::input_parameter< std::string >::type child(childSEXP);
    rcpp_result_gen = Rcpp::wrap(getXMLXPtr5attr(doc, level1, level2, level3, level4, child));
    return rcpp_result_gen;
END_RCPP
}
// getXMLXPtr3attr_one
Rcpp::CharacterVector getXMLXPtr3attr_one(XPtrXML doc, std::string level1, std::string level2, std::string child, std::string attrname);
RcppExport SEXP _openxlsx_getXMLXPtr3attr_one(SEXP docSEXP, SEXP level1SEXP, SEXP level2SEXP, SEXP childSEXP, SEXP attrnameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type level1(level1SEXP);
    Rcpp::traits::input_parameter< std::string >::type level2(level2SEXP);
    Rcpp::traits::input_parameter< std::string >::type child(childSEXP);
    Rcpp::traits::input_parameter< std::string >::type attrname(attrnameSEXP);
    rcpp_result_gen = Rcpp::wrap(getXMLXPtr3attr_one(doc, level1, level2, child, attrname));
    return rcpp_result_gen;
END_RCPP
}
// getXMLXPtr4attr_one
SEXP getXMLXPtr4attr_one(XPtrXML doc, std::string level1, std::string level2, std::string level3, std::string child, std::string attrname);
RcppExport SEXP _openxlsx_getXMLXPtr4attr_one(SEXP docSEXP, SEXP level1SEXP, SEXP level2SEXP, SEXP level3SEXP, SEXP childSEXP, SEXP attrnameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type level1(level1SEXP);
    Rcpp::traits::input_parameter< std::string >::type level2(level2SEXP);
    Rcpp::traits::input_parameter< std::string >::type level3(level3SEXP);
    Rcpp::traits::input_parameter< std::string >::type child(childSEXP);
    Rcpp::traits::input_parameter< std::string >::type attrname(attrnameSEXP);
    rcpp_result_gen = Rcpp::wrap(getXMLXPtr4attr_one(doc, level1, level2, level3, child, attrname));
    return rcpp_result_gen;
END_RCPP
}
// printXPtr
std::string printXPtr(XPtrXML doc);
RcppExport SEXP _openxlsx_printXPtr(SEXP docSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrXML >::type doc(docSEXP);
    rcpp_result_gen = Rcpp::wrap(printXPtr(doc));
    return rcpp_result_gen;
END_RCPP
}
// readXML
SEXP readXML(std::string path);
RcppExport SEXP _openxlsx_readXML(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(readXML(path));
    return rcpp_result_gen;
END_RCPP
}
// get_shared_strings
CharacterVector get_shared_strings(std::string xmlFile, bool isFile);
RcppExport SEXP _openxlsx_get_shared_strings(SEXP xmlFileSEXP, SEXP isFileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type xmlFile(xmlFileSEXP);
    Rcpp::traits::input_parameter< bool >::type isFile(isFileSEXP);
    rcpp_result_gen = Rcpp::wrap(get_shared_strings(xmlFile, isFile));
    return rcpp_result_gen;
END_RCPP
}
// getCellInfo
List getCellInfo(std::string xmlFile, CharacterVector sharedStrings, bool skipEmptyRows, int startRow, IntegerVector rows, bool getDates);
RcppExport SEXP _openxlsx_getCellInfo(SEXP xmlFileSEXP, SEXP sharedStringsSEXP, SEXP skipEmptyRowsSEXP, SEXP startRowSEXP, SEXP rowsSEXP, SEXP getDatesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type xmlFile(xmlFileSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type sharedStrings(sharedStringsSEXP);
    Rcpp::traits::input_parameter< bool >::type skipEmptyRows(skipEmptyRowsSEXP);
    Rcpp::traits::input_parameter< int >::type startRow(startRowSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< bool >::type getDates(getDatesSEXP);
    rcpp_result_gen = Rcpp::wrap(getCellInfo(xmlFile, sharedStrings, skipEmptyRows, startRow, rows, getDates));
    return rcpp_result_gen;
END_RCPP
}
// read_workbook
SEXP read_workbook(IntegerVector cols_in, IntegerVector rows_in, CharacterVector v, IntegerVector string_inds, LogicalVector is_date, bool hasColNames, char hasSepNames, bool skipEmptyRows, bool skipEmptyCols, int nRows, Function clean_names);
RcppExport SEXP _openxlsx_read_workbook(SEXP cols_inSEXP, SEXP rows_inSEXP, SEXP vSEXP, SEXP string_indsSEXP, SEXP is_dateSEXP, SEXP hasColNamesSEXP, SEXP hasSepNamesSEXP, SEXP skipEmptyRowsSEXP, SEXP skipEmptyColsSEXP, SEXP nRowsSEXP, SEXP clean_namesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type cols_in(cols_inSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type rows_in(rows_inSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type string_inds(string_indsSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type is_date(is_dateSEXP);
    Rcpp::traits::input_parameter< bool >::type hasColNames(hasColNamesSEXP);
    Rcpp::traits::input_parameter< char >::type hasSepNames(hasSepNamesSEXP);
    Rcpp::traits::input_parameter< bool >::type skipEmptyRows(skipEmptyRowsSEXP);
    Rcpp::traits::input_parameter< bool >::type skipEmptyCols(skipEmptyColsSEXP);
    Rcpp::traits::input_parameter< int >::type nRows(nRowsSEXP);
    Rcpp::traits::input_parameter< Function >::type clean_names(clean_namesSEXP);
    rcpp_result_gen = Rcpp::wrap(read_workbook(cols_in, rows_in, v, string_inds, is_date, hasColNames, hasSepNames, skipEmptyRows, skipEmptyCols, nRows, clean_names));
    return rcpp_result_gen;
END_RCPP
}
// calc_number_rows
int calc_number_rows(CharacterVector x, bool skipEmptyRows);
RcppExport SEXP _openxlsx_calc_number_rows(SEXP xSEXP, SEXP skipEmptyRowsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type skipEmptyRows(skipEmptyRowsSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_number_rows(x, skipEmptyRows));
    return rcpp_result_gen;
END_RCPP
}
// map_cell_types_to_integer
IntegerVector map_cell_types_to_integer(CharacterVector t);
RcppExport SEXP _openxlsx_map_cell_types_to_integer(SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(map_cell_types_to_integer(t));
    return rcpp_result_gen;
END_RCPP
}
// map_cell_types_to_char
CharacterVector map_cell_types_to_char(IntegerVector t);
RcppExport SEXP _openxlsx_map_cell_types_to_char(SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(map_cell_types_to_char(t));
    return rcpp_result_gen;
END_RCPP
}
// build_cell_types_integer
IntegerVector build_cell_types_integer(CharacterVector classes, int n_rows);
RcppExport SEXP _openxlsx_build_cell_types_integer(SEXP classesSEXP, SEXP n_rowsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type classes(classesSEXP);
    Rcpp::traits::input_parameter< int >::type n_rows(n_rowsSEXP);
    rcpp_result_gen = Rcpp::wrap(build_cell_types_integer(classes, n_rows));
    return rcpp_result_gen;
END_RCPP
}
// buildCellTypes
CharacterVector buildCellTypes(CharacterVector classes, int nRows);
RcppExport SEXP _openxlsx_buildCellTypes(SEXP classesSEXP, SEXP nRowsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type classes(classesSEXP);
    Rcpp::traits::input_parameter< int >::type nRows(nRowsSEXP);
    rcpp_result_gen = Rcpp::wrap(buildCellTypes(classes, nRows));
    return rcpp_result_gen;
END_RCPP
}
// build_cell_merges
List build_cell_merges(List comps);
RcppExport SEXP _openxlsx_build_cell_merges(SEXP compsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type comps(compsSEXP);
    rcpp_result_gen = Rcpp::wrap(build_cell_merges(comps));
    return rcpp_result_gen;
END_RCPP
}
// buildCellList
List buildCellList(CharacterVector r, CharacterVector t, CharacterVector v);
RcppExport SEXP _openxlsx_buildCellList(SEXP rSEXP, SEXP tSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type t(tSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(buildCellList(r, t, v));
    return rcpp_result_gen;
END_RCPP
}
// write_worksheet_xml_2
SEXP write_worksheet_xml_2(std::string prior, std::string post, Reference sheet_data, Rcpp::List cols_attr, Rcpp::List rows_attr, Nullable<CharacterVector> row_heights_, Nullable<CharacterVector> outline_levels_, std::string R_fileName);
RcppExport SEXP _openxlsx_write_worksheet_xml_2(SEXP priorSEXP, SEXP postSEXP, SEXP sheet_dataSEXP, SEXP cols_attrSEXP, SEXP rows_attrSEXP, SEXP row_heights_SEXP, SEXP outline_levels_SEXP, SEXP R_fileNameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< std::string >::type post(postSEXP);
    Rcpp::traits::input_parameter< Reference >::type sheet_data(sheet_dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type cols_attr(cols_attrSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type rows_attr(rows_attrSEXP);
    Rcpp::traits::input_parameter< Nullable<CharacterVector> >::type row_heights_(row_heights_SEXP);
    Rcpp::traits::input_parameter< Nullable<CharacterVector> >::type outline_levels_(outline_levels_SEXP);
    Rcpp::traits::input_parameter< std::string >::type R_fileName(R_fileNameSEXP);
    rcpp_result_gen = Rcpp::wrap(write_worksheet_xml_2(prior, post, sheet_data, cols_attr, rows_attr, row_heights_, outline_levels_, R_fileName));
    return rcpp_result_gen;
END_RCPP
}
// buildMatrixNumeric
SEXP buildMatrixNumeric(CharacterVector v, IntegerVector rowInd, IntegerVector colInd, CharacterVector colNames, int nRows, int nCols);
RcppExport SEXP _openxlsx_buildMatrixNumeric(SEXP vSEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP colNamesSEXP, SEXP nRowsSEXP, SEXP nColsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type colInd(colIndSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type colNames(colNamesSEXP);
    Rcpp::traits::input_parameter< int >::type nRows(nRowsSEXP);
    Rcpp::traits::input_parameter< int >::type nCols(nColsSEXP);
    rcpp_result_gen = Rcpp::wrap(buildMatrixNumeric(v, rowInd, colInd, colNames, nRows, nCols));
    return rcpp_result_gen;
END_RCPP
}
// buildMatrixMixed
SEXP buildMatrixMixed(CharacterVector v, IntegerVector rowInd, IntegerVector colInd, CharacterVector colNames, int nRows, int nCols, IntegerVector charCols, IntegerVector dateCols);
RcppExport SEXP _openxlsx_buildMatrixMixed(SEXP vSEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP colNamesSEXP, SEXP nRowsSEXP, SEXP nColsSEXP, SEXP charColsSEXP, SEXP dateColsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type colInd(colIndSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type colNames(colNamesSEXP);
    Rcpp::traits::input_parameter< int >::type nRows(nRowsSEXP);
    Rcpp::traits::input_parameter< int >::type nCols(nColsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type charCols(charColsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type dateCols(dateColsSEXP);
    rcpp_result_gen = Rcpp::wrap(buildMatrixMixed(v, rowInd, colInd, colNames, nRows, nCols, charCols, dateCols));
    return rcpp_result_gen;
END_RCPP
}
// matrixRowInds
IntegerVector matrixRowInds(IntegerVector indices);
RcppExport SEXP _openxlsx_matrixRowInds(SEXP indicesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type indices(indicesSEXP);
    rcpp_result_gen = Rcpp::wrap(matrixRowInds(indices));
    return rcpp_result_gen;
END_RCPP
}
// build_table_xml
CharacterVector build_table_xml(std::string table, std::string tableStyleXML, std::string ref, std::vector<std::string> colNames, bool showColNames, bool withFilter);
RcppExport SEXP _openxlsx_build_table_xml(SEXP tableSEXP, SEXP tableStyleXMLSEXP, SEXP refSEXP, SEXP colNamesSEXP, SEXP showColNamesSEXP, SEXP withFilterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type table(tableSEXP);
    Rcpp::traits::input_parameter< std::string >::type tableStyleXML(tableStyleXMLSEXP);
    Rcpp::traits::input_parameter< std::string >::type ref(refSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type colNames(colNamesSEXP);
    Rcpp::traits::input_parameter< bool >::type showColNames(showColNamesSEXP);
    Rcpp::traits::input_parameter< bool >::type withFilter(withFilterSEXP);
    rcpp_result_gen = Rcpp::wrap(build_table_xml(table, tableStyleXML, ref, colNames, showColNames, withFilter));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_openxlsx_getXML1", (DL_FUNC) &_openxlsx_getXML1, 2},
    {"_openxlsx_getXML2", (DL_FUNC) &_openxlsx_getXML2, 3},
    {"_openxlsx_getXML3", (DL_FUNC) &_openxlsx_getXML3, 4},
    {"_openxlsx_getXMLattr", (DL_FUNC) &_openxlsx_getXMLattr, 2},
    {"_openxlsx_calc_column_widths", (DL_FUNC) &_openxlsx_calc_column_widths, 7},
    {"_openxlsx_convert_to_excel_ref", (DL_FUNC) &_openxlsx_convert_to_excel_ref, 2},
    {"_openxlsx_convert_from_excel_ref", (DL_FUNC) &_openxlsx_convert_from_excel_ref, 1},
    {"_openxlsx_convert_to_excel_ref_expand", (DL_FUNC) &_openxlsx_convert_to_excel_ref_expand, 3},
    {"_openxlsx_isInternalHyperlink", (DL_FUNC) &_openxlsx_isInternalHyperlink, 1},
    {"_openxlsx_write_file", (DL_FUNC) &_openxlsx_write_file, 4},
    {"_openxlsx_cppReadFile", (DL_FUNC) &_openxlsx_cppReadFile, 1},
    {"_openxlsx_read_file_newline", (DL_FUNC) &_openxlsx_read_file_newline, 1},
    {"_openxlsx_get_letters", (DL_FUNC) &_openxlsx_get_letters, 0},
    {"_openxlsx_markUTF8", (DL_FUNC) &_openxlsx_markUTF8, 2},
    {"_openxlsx_loadworksheets", (DL_FUNC) &_openxlsx_loadworksheets, 4},
    {"_openxlsx_getNodes", (DL_FUNC) &_openxlsx_getNodes, 2},
    {"_openxlsx_getOpenClosedNode", (DL_FUNC) &_openxlsx_getOpenClosedNode, 3},
    {"_openxlsx_getAttr", (DL_FUNC) &_openxlsx_getAttr, 2},
    {"_openxlsx_getChildlessNode_ss", (DL_FUNC) &_openxlsx_getChildlessNode_ss, 2},
    {"_openxlsx_getChildlessNode", (DL_FUNC) &_openxlsx_getChildlessNode, 2},
    {"_openxlsx_get_extLst_Major", (DL_FUNC) &_openxlsx_get_extLst_Major, 1},
    {"_openxlsx_cell_ref_to_col", (DL_FUNC) &_openxlsx_cell_ref_to_col, 1},
    {"_openxlsx_int_2_cell_ref", (DL_FUNC) &_openxlsx_int_2_cell_ref, 1},
    {"_openxlsx_readXMLPtr", (DL_FUNC) &_openxlsx_readXMLPtr, 1},
    {"_openxlsx_getXMLXPtr1", (DL_FUNC) &_openxlsx_getXMLXPtr1, 2},
    {"_openxlsx_getXMLXPtr2", (DL_FUNC) &_openxlsx_getXMLXPtr2, 3},
    {"_openxlsx_getXMLXPtr3", (DL_FUNC) &_openxlsx_getXMLXPtr3, 4},
    {"_openxlsx_getXMLXPtr4", (DL_FUNC) &_openxlsx_getXMLXPtr4, 5},
    {"_openxlsx_getXMLXPtr5", (DL_FUNC) &_openxlsx_getXMLXPtr5, 6},
    {"_openxlsx_getXMLXPtr3attr", (DL_FUNC) &_openxlsx_getXMLXPtr3attr, 4},
    {"_openxlsx_getXMLXPtr4attr", (DL_FUNC) &_openxlsx_getXMLXPtr4attr, 5},
    {"_openxlsx_getXMLXPtr5attr", (DL_FUNC) &_openxlsx_getXMLXPtr5attr, 6},
    {"_openxlsx_getXMLXPtr3attr_one", (DL_FUNC) &_openxlsx_getXMLXPtr3attr_one, 5},
    {"_openxlsx_getXMLXPtr4attr_one", (DL_FUNC) &_openxlsx_getXMLXPtr4attr_one, 6},
    {"_openxlsx_printXPtr", (DL_FUNC) &_openxlsx_printXPtr, 1},
    {"_openxlsx_readXML", (DL_FUNC) &_openxlsx_readXML, 1},
    {"_openxlsx_get_shared_strings", (DL_FUNC) &_openxlsx_get_shared_strings, 2},
    {"_openxlsx_getCellInfo", (DL_FUNC) &_openxlsx_getCellInfo, 6},
    {"_openxlsx_read_workbook", (DL_FUNC) &_openxlsx_read_workbook, 11},
    {"_openxlsx_calc_number_rows", (DL_FUNC) &_openxlsx_calc_number_rows, 2},
    {"_openxlsx_map_cell_types_to_integer", (DL_FUNC) &_openxlsx_map_cell_types_to_integer, 1},
    {"_openxlsx_map_cell_types_to_char", (DL_FUNC) &_openxlsx_map_cell_types_to_char, 1},
    {"_openxlsx_build_cell_types_integer", (DL_FUNC) &_openxlsx_build_cell_types_integer, 2},
    {"_openxlsx_buildCellTypes", (DL_FUNC) &_openxlsx_buildCellTypes, 2},
    {"_openxlsx_build_cell_merges", (DL_FUNC) &_openxlsx_build_cell_merges, 1},
    {"_openxlsx_buildCellList", (DL_FUNC) &_openxlsx_buildCellList, 3},
    {"_openxlsx_write_worksheet_xml_2", (DL_FUNC) &_openxlsx_write_worksheet_xml_2, 8},
    {"_openxlsx_buildMatrixNumeric", (DL_FUNC) &_openxlsx_buildMatrixNumeric, 6},
    {"_openxlsx_buildMatrixMixed", (DL_FUNC) &_openxlsx_buildMatrixMixed, 8},
    {"_openxlsx_matrixRowInds", (DL_FUNC) &_openxlsx_matrixRowInds, 1},
    {"_openxlsx_build_table_xml", (DL_FUNC) &_openxlsx_build_table_xml, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_openxlsx(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
