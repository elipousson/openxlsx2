
#' R6 class for a Workbook Hyperlink
#'
#' A hyperlink
#'
#' @noRd
wbSheetData <- R6::R6Class(
  "wbSheetData",
  public = list(
    # TODO which fields should be moved to private?

    #' @field row_attr row_attr
    row_attr = NULL,

    #' @field cc cc
    cc = NULL,

    #' @field cc_out cc_out
    cc_out = NULL,

    #' @description
    #' Creates a new `wbSheetData` object
    #' @return a `wbSheetData` object
    initialize = function() {
      invisible(self)
    }
  )
)

## TODO is this even used?
#' @rdname wbSheetData
#' @noRd
wb_sheet_data <- function() {
  wbSheetData$new()
}


# helpers -----------------------------------------------------------------

# Consider making some helpers for the cc stuff.

# cell attributes used in most files
empty_sheet_data <- function(n) {
  create_char_dataframe(
    colnames = c("r", "row_r", "c_r", "c_s", "c_t", "f", "v", "is", "typ"),
    n = n
  )
}

# additional cell attributes
empty_sheet_data_cc <- function(n) {
    create_char_dataframe(
    colnames = c("r", "row_r", "c_r", "c_cm", "c_ph", "c_vm"),
    n = n
  )
}

# additional formula attributes
empty_sheet_data_ff <- function(n) {
  create_char_dataframe(
    colnames = c("r", "row_r", "c_r", "f_t", "f_ref", "f_ca", "f_si"),
    n = n
  )
}

empty_row_attr <- function(n) {
  create_char_dataframe(
    colnames = c("collapsed", "customFormat", "customHeight", "x14ac:dyDescent",
                 "ht", "hidden", "outlineLevel", "r", "ph", "spans", "s",
                 "thickBot", "thickTop"),
    n = n
  )
}
