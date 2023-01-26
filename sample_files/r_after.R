# This file is from https://github.com/rstudio/shiny, under the GPL v3.

#' @include utils.R
NULL

#' Create a Bootstrap page
#'
#' Create a Shiny UI page that loads the CSS and JavaScript for
#' [Bootstrap](https://getbootstrap.com/), and has no content in the page
#' body (other than what you provide).
#'
#' This function is primarily intended for users who are proficient in HTML/CSS,
#' and know how to lay out pages in Bootstrap. Most applications should use
#' [fluidPage()] along with layout functions like
#' [fluidRow()] and [sidebarLayout()].
#'
#' @param ... The contents of the document body.
#' @param title The browser window title (defaults to the host URL of the page)
#' @param theme One of the following:
#'   * `NULL` (the default), which implies a "stock" build of Bootstrap 3.
#'   * A [bslib::bs_theme()] object. This can be used to replace a stock
#'   build of Bootstrap 3 with a customized version of Bootstrap 3 or higher.
#'   * A character string pointing to an alternative Bootstrap stylesheet
#'   (normally a css file within the www directory, e.g. `www/bootstrap.css`).
#' @param lang ISO 639-1 language code for the HTML page, such as "en" or "ko".
#'   This will be used as the lang in the \code{<html>} tag, as in \code{<html lang="en">}.
#'   The default (NULL) results in an empty string.
#'
#' @return A UI definition that can be passed to the [shinyUI] function.
#'
#' @note The `basicPage` function is deprecated, you should use the
#'   [fluidPage()] function instead.
#'
#' @seealso [fluidPage()], [fixedPage()]
#' @export
bootstrapPage <- function(..., title = NULL, theme = NULL, lang = NULL) {

  args <- list(
    jqueryDependency(),
    if (!is.null(title)) tags$head(tags$title(title)),
    if (is.character(theme)) {
      if (length(theme) > 1) stop("`theme` must point to a single CSS file, not multiple files.")
      tags$head(tags$link(rel="stylesheet", type="text/css", href=theme))
    },
    # remainder of tags passed to the function
    list2(...)
  )

  # If theme is a bslib::bs_theme() object, bootstrapLib() needs to come first
  # (so other tags, when rendered via tagFunction(), know about the relevant
  # theme). However, if theme is anything else, we intentionally avoid changing
  # the tagList() contents to avoid breaking user code that makes assumptions
  # about the return value https://github.com/rstudio/shiny/issues/3235
  if (is_bs_theme(theme)) {
    args <- c(bootstrapLib(theme), args)
    ui <- do.call(tagList, args)
  } else {
    ui <- do.call(tagList, args)
    ui <- attachDependencies(ui, bootstrapLib())
  }

  setLang(ui, lang)
}

setLang <- function(ui, lang) {
  # Add lang attribute to be passed to renderPage function
  attr(ui, "lang") <- lang
  ui
}
getLang <- function(ui) {
  # Check if ui has lang attribute; otherwise, NULL
  attr(ui, "lang", exact = TRUE)
}

#' Bootstrap libraries
#'
#' This function defines a set of web dependencies necessary for using Bootstrap
#' components in a web page.
#'
#' It isn't necessary to call this function if you use [bootstrapPage()] or
#' others which use `bootstrapPage`, such [fluidPage()], [navbarPage()],
#' [fillPage()], etc, because they already include the Bootstrap web dependencies.
#'
#' @inheritParams bootstrapPage
#' @export
bootstrapLib <- function(theme = NULL) {
  tagFunction(function() {
    if (isRunning()) {
      setCurrentTheme(theme)
    }

    # If we're not compiling Bootstrap Sass (from bslib), return the
    # static Bootstrap build.
    if (!is_bs_theme(theme)) {
      # We'll enter here if `theme` is the path to a .css file, like that
      # provided by `shinythemes::shinytheme("darkly")`.
      return(bootstrapDependency(theme))
    }

    # Make bootstrap Sass available so other tagFunction()s (e.g.,
    # sliderInput() et al) can resolve their HTML dependencies at render time
    # using getCurrentTheme(). Note that we're making an implicit assumption
    # that this tagFunction() executes *before* all other tagFunction()s; but
    # that should be fine considering that, DOM tree order is preorder,
    # depth-first traversal, and at least in the bootstrapPage(theme) case, we
    # have control over the relative ordering.
    # https://dom.spec.whatwg.org/#concept-tree
    # https://stackoverflow.com/a/16113998/1583084
    #
    # Note also that since this is shinyOptions() (and not options()), the
    # option is automatically reset when the app (or session) exits
    if (isRunning()) {
      registerThemeDependency(bs_theme_deps)

    } else {
      # Technically, this a potential issue (someone trying to execute/render
      # bootstrapLib outside of a Shiny app), but it seems that, in that case,
      # you likely have other problems, since sliderInput() et al. already assume
      # that Shiny is the one doing the rendering
      #warning(
      #  "It appears `shiny::bootstrapLib()` was rendered outside of an Shiny ",
      #  "application context, likely by calling `as.tags()`, `as.character()`, ",
      #  "or `print()` directly on `bootstrapLib()` or UI components that may ",
      #  "depend on it (e.g., `fluidPage()`, etc). For 'themable' UI components ",
      #  "(e.g., `sliderInput()`, `selectInput()`, `dateInput()`, etc) to style ",
      #  "themselves based on the Bootstrap theme, make sure `bootstrapLib()` is ",
      #  "provided directly to the UI and that the UI is provided direction to ",
      #  "`shinyApp()` (or `runApp()`)", call. = FALSE
      #)
    }

    bslib::bs_theme_dependencies(theme)
  })
}

# This is defined outside of bootstrapLib() because registerThemeDependency()
# wants a non-anonymous function with a single argument
bs_theme_deps <- function(theme) {
  bslib::bs_theme_dependencies(theme)
}

is_bs_theme <- function(x) {
  bslib::is_bs_theme(x)
}

#' Obtain Shiny's Bootstrap Sass theme
#'
#' Intended for use by Shiny developers to create Shiny bindings with intelligent
#' styling based on the [bootstrapLib()]'s `theme` value.
#'
#' @return If called at render-time (i.e., inside a [htmltools::tagFunction()]),
#' and [bootstrapLib()]'s `theme` has been set to a [bslib::bs_theme()]
#' object, then this returns the `theme`. Otherwise, this returns `NULL`.
#' @seealso [getCurrentOutputInfo()], [bootstrapLib()], [htmltools::tagFunction()]
#'
#' @keywords internal
#' @export
getCurrentTheme <- function() {
  getShinyOption("bootstrapTheme", default = NULL)
}

getCurrentThemeVersion <- function() {
  theme <- getCurrentTheme()
  if (bslib::is_bs_theme(theme)) {
    bslib::theme_version(theme)
  } else {
    strsplit(bootstrapVersion, ".", fixed = TRUE)[[1]][[1]]
  }
}

setCurrentTheme <- function(theme) {
  shinyOptions(bootstrapTheme = theme)
}

#' Register a theme dependency
#'
#' This function registers a function that returns an [htmlDependency()] or list
#' of such objects. If `session$setCurrentTheme()` is called, the function will
#' be re-executed, and the resulting html dependency will be sent to the client.
#'
#' Note that `func` should **not** be an anonymous function, or a function which
#' is defined within the calling function. This is so that,
#' `registerThemeDependency()` is called multiple times with the function, it
#' tries to deduplicate them
#'
#' @param func A function that takes one argument, `theme` (which is a
#'   [sass::sass_layer()] object), and returns an htmlDependency object, or list
#'   of them.
#'
#' @export
#' @keywords internal
registerThemeDependency <- function(func) {
  func_expr <- substitute(func)
  if (is.call(func_expr) && identical(func_expr[[1]], as.symbol("function"))) {
    warning("`func` should not be an anonymous function. ",
      "It should be declared outside of the function that calls registerThemeDependency(); ",
      "otherwise it will not be deduplicated by Shiny and multiple copies of the ",
      "resulting htmlDependency may be computed and sent to the client.")
  }
  if (!is.function(func) || length(formals(func)) != 1) {
    stop("`func` must be a function with one argument (the current theme)")
  }

  # Note that this will automatically scope to the app or session level,
  # depending on if this is called from within a session or not.
  funcs <- getShinyOption("themeDependencyFuncs", default = list())

  # Don't add func if it's already present.
  have_func <- any(vapply(funcs, identical, logical(1), func))
  if (!have_func) {
    funcs[[length(funcs) + 1]] <- func
  }

  shinyOptions("themeDependencyFuncs" = funcs)
}

bootstrapDependency <- function(theme) {
  htmlDependency(
    "bootstrap",
    bootstrapVersion,
    src = "www/shared/bootstrap",
    package = "shiny",
    script = c(
      "js/bootstrap.min.js",
      # Safely adding accessibility plugin for screen readers and keyboard users; no break for sighted aspects (see https://github.com/paypal/bootstrap-accessibility-plugin)
      "accessibility/js/bootstrap-accessibility.min.js"
    ),
    stylesheet = c(
      theme %||% "css/bootstrap.min.css",
      # Safely adding accessibility plugin for screen readers and keyboard users; no break for sighted aspects (see https://github.com/paypal/bootstrap-accessibility-plugin)
      "accessibility/css/bootstrap-accessibility.min.css"
    ),
    meta = list(viewport = "width=device-width, initial-scale=1")
  )
}

bootstrapVersion <- "3.4.1"


#' @rdname bootstrapPage
#' @export
basicPage <- function(...) {
  bootstrapPage(div(class="container-fluid", list(...)))
}


#' Create a page that fills the window
#'
#' `fillPage` creates a page whose height and width always fill the
#' available area of the browser window.
#'
#' The [fluidPage()] and [fixedPage()] functions are used
#' for creating web pages that are laid out from the top down, leaving
#' whitespace at the bottom if the page content's height is smaller than the
#' browser window, and scrolling if the content is larger than the window.
#'
#' `fillPage` is designed to latch the document body's size to the size of
#' the window. This makes it possible to fill it with content that also scales
#' to the size of the window.
#'
#' For example, `fluidPage(plotOutput("plot", height = "100%"))` will not
#' work as expected; the plot element's effective height will be `0`,
#' because the plot's containing elements (`<div>` and `<body>`) have
#' *automatic* height; that is, they determine their own height based on
#' the height of their contained elements. However,
#' `fillPage(plotOutput("plot", height = "100%"))` will work because
#' `fillPage` fixes the `<body>` height at 100% of the window height.
#'
#' Note that `fillPage(plotOutput("plot"))` will not cause the plot to fill
#' the page. Like most Shiny output widgets, `plotOutput`'s default height
#' is a fixed number of pixels. You must explicitly set `height = "100%"`
#' if you want a plot (or htmlwidget, say) to fill its container.
#'
#' One must be careful what layouts/panels/elements come between the
#' `fillPage` and the plots/widgets. Any container that has an automatic
#' height will cause children with `height = "100%"` to misbehave. Stick
#' to functions that are designed for fill layouts, such as the ones in this
#' package.
#'
#' @param ... Elements to include within the page.
#' @param padding Padding to use for the body. This can be a numeric vector
#'   (which will be interpreted as pixels) or a character vector with valid CSS
#'   lengths. The length can be between one and four. If one, then that value
#'   will be used for all four sides. If two, then the first value will be used
#'   for the top and bottom, while the second value will be used for left and
#'   right. If three, then the first will be used for top, the second will be
#'   left and right, and the third will be bottom. If four, then the values will
#'   be interpreted as top, right, bottom, and left respectively.
#' @param title The title to use for the browser window/tab (it will not be
#'   shown in the document).
#' @param bootstrap If `TRUE`, load the Bootstrap CSS library.
#' @inheritParams bootstrapPage
#'
#' @family layout functions
#'
#' @examples
#' fillPage(
#'   tags$style(type = "text/css",
#'     ".half-fill { width: 50%; height: 100%; }",
#'     "#one { float: left; background-color: #ddddff; }",
#'     "#two { float: right; background-color: #ccffcc; }"
#'   ),
#'   div(id = "one", class = "half-fill",
#'     "Left half"
#'   ),
#'   div(id = "two", class = "half-fill",
#'     "Right half"
#'   ),
#'   padding = 10
#' )
#'
#' fillPage(
#'   fillRow(
#'     div(style = "background-color: red; width: 100%; height: 100%;"),
#'     div(style = "background-color: blue; width: 100%; height: 100%;")
#'   )
#' )
#' @export
fillPage <- function(..., padding = 0, title = NULL, bootstrap = TRUE,
  theme = NULL, lang = NULL) {

  fillCSS <- tags$head(tags$style(type = "text/css",
    "html, body { width: 100%; height: 100%; overflow: hidden; }",
    sprintf("body { padding: %s; margin: 0; }", collapseSizes(padding))
  ))

  if (isTRUE(bootstrap)) {
    ui <- bootstrapPage(title = title, theme = theme, fillCSS, lang = lang, ...)
  } else {
    ui <- tagList(
      fillCSS,
      if (!is.null(title)) tags$head(tags$title(title)),
      ...
    )

    ui <- setLang(ui, lang)
  }

  return(ui)
}

collapseSizes <- function(padding) {
  paste(
    sapply(padding, shiny::validateCssUnit, USE.NAMES = FALSE),
    collapse = " ")
}

#' Create a page with a top level navigation bar
#'
#' Create a page that contains a top level navigation bar that can be used to
#' toggle a set of [tabPanel()] elements.
#'
#' @param title The title to display in the navbar
#' @param ... [tabPanel()] elements to include in the page. The
#'   `navbarMenu` function also accepts strings, which will be used as menu
#'   section headers. If the string is a set of dashes like `"----"` a
#'   horizontal separator will be displayed in the menu.
#' @param id If provided, you can use `input$`*`id`* in your
#'   server logic to determine which of the current tabs is active. The value
#'   will correspond to the `value` argument that is passed to
#'   [tabPanel()].
#' @param selected The `value` (or, if none was supplied, the `title`)
#'   of the tab that should be selected by default. If `NULL`, the first
#'   tab will be selected.
#' @param position Determines whether the navbar should be displayed at the top
#'   of the page with normal scrolling behavior (`"static-top"`), pinned at
#'   the top (`"fixed-top"`), or pinned at the bottom
#'   (`"fixed-bottom"`). Note that using `"fixed-top"` or
#'   `"fixed-bottom"` will cause the navbar to overlay your body content,
#'   unless you add padding, e.g.: \code{tags$style(type="text/css", "body
#'   {padding-top: 70px;}")}
#' @param header Tag or list of tags to display as a common header above all
#'   tabPanels.
#' @param footer Tag or list of tags to display as a common footer below all
#'   tabPanels
#' @param inverse `TRUE` to use a dark background and light text for the
#'   navigation bar
#' @param collapsible `TRUE` to automatically collapse the navigation
#'   elements into a menu when the width of the browser is less than 940 pixels
#'   (useful for viewing on smaller touchscreen device)
#' @param fluid `TRUE` to use a fluid layout. `FALSE` to use a fixed
#'   layout.
#' @param windowTitle the browser window title (as a character string). The
#'   default value, `NA`, means to use any character strings that appear in
#'   `title` (if none are found, the host URL of the page is displayed by
#'   default).
#' @inheritParams bootstrapPage
#' @param icon Optional icon to appear on a `navbarMenu` tab.
#'
#' @return A UI definition that can be passed to the [shinyUI] function.
#'
#' @details The `navbarMenu` function can be used to create an embedded
#'   menu within the navbar that in turns includes additional tabPanels (see
#'   example below).
#'
#' @seealso [tabPanel()], [tabsetPanel()],
#'   [updateNavbarPage()], [insertTab()],
#'   [showTab()]
#'
#' @family layout functions
#'
#' @examples
#' navbarPage("App Title",
#'   tabPanel("Plot"),
#'   tabPanel("Summary"),
#'   tabPanel("Table")
#' )
#'
#' navbarPage("App Title",
#'   tabPanel("Plot"),
#'   navbarMenu("More",
#'     tabPanel("Summary"),
#'     "----",
#'     "Section header",
#'     tabPanel("Table")
#'   )
#' )
#' @export
navbarPage <- function(title,
                       ...,
                       id = NULL,
                       selected = NULL,
                       position = c("static-top", "fixed-top", "fixed-bottom"),
                       header = NULL,
                       footer = NULL,
                       inverse = FALSE,
                       collapsible = FALSE,
                       fluid = TRUE,
                       theme = NULL,
                       windowTitle = NA,
                       lang = NULL) {
  remove_first_class(bslib::page_navbar(
    ..., title = title, id = id, selected = selected,
    position = match.arg(position),
    header = header, footer = footer,
    inverse = inverse, collapsible = collapsible,
    fluid = fluid,
    theme = theme,
    window_title = windowTitle,
    lang = lang
  ))
}

#' @param menuName A name that identifies this `navbarMenu`. This
#'   is needed if you want to insert/remove or show/hide an entire
#'   `navbarMenu`.
#'
#' @rdname navbarPage
#' @export
navbarMenu <- function(title, ..., menuName = title, icon = NULL) {
  bslib::nav_menu(title, ..., value = menuName, icon = icon)
}

#' Create a well panel
#'
#' Creates a panel with a slightly inset border and grey background. Equivalent
#' to Bootstrap's `well` CSS class.
#'
#' @param ... UI elements to include inside the panel.
#' @return The newly created panel.
#' @export
wellPanel <- function(...) {
  div(class="well", ...)
}

#' Conditional Panel
#'
#' Creates a panel that is visible or not, depending on the value of a
#' JavaScript expression. The JS expression is evaluated once at startup and
#' whenever Shiny detects a relevant change in input/output.
#'
#' In the JS expression, you can refer to `input` and `output`
#' JavaScript objects that contain the current values of input and output. For
#' example, if you have an input with an id of `foo`, then you can use
#' `input.foo` to read its value. (Be sure not to modify the input/output
#' objects, as this may cause unpredictable behavior.)
#'
#' @param condition A JavaScript expression that will be evaluated repeatedly to
#'   determine whether the panel should be displayed.
#' @param ns The [`namespace()`][NS] object of the current module, if
#'   any.
#' @param ... Elements to include in the panel.
#'
#' @note You are not recommended to use special JavaScript characters such as a
#'   period `.` in the input id's, but if you do use them anyway, for
#'   example, `inputId = "foo.bar"`, you will have to use
#'   `input["foo.bar"]` instead of `input.foo.bar` to read the input
#'   value.
#' @examples
#' ## Only run this example in interactive R sessions
#' if (interactive()) {
#'   ui <- fluidPage(
#'     sidebarPanel(
#'       selectInput("plotType", "Plot Type",
#'         c(Scatter = "scatter", Histogram = "hist")
#'       ),
#'       # Only show this panel if the plot type is a histogram
#'       conditionalPanel(
#'         condition = "input.plotType == 'hist'",
#'         selectInput(
#'           "breaks", "Breaks",
#'           c("Sturges", "Scott", "Freedman-Diaconis", "[Custom]" = "custom")
#'         ),
#'         # Only show this panel if Custom is selected
#'         conditionalPanel(
#'           condition = "input.breaks == 'custom'",
#'           sliderInput("breakCount", "Break Count", min = 1, max = 50, value = 10)
#'         )
#'       )
#'     ),
#'     mainPanel(
#'       plotOutput("plot")
#'     )
#'   )
#'
#'   server <- function(input, output) {
#'     x <- rnorm(100)
#'     y <- rnorm(100)
#'
#'     output$plot <- renderPlot({
#'       if (input$plotType == "scatter") {
#'         plot(x, y)
#'       } else {
#'         breaks <- input$breaks
#'         if (breaks == "custom") {
#'           breaks <- input$breakCount
#'         }
#'
#'         hist(x, breaks = breaks)
#'       }
#'     })
#'   }
#'
#'   shinyApp(ui, server)
#' }
#' @export
conditionalPanel <- function(condition, ..., ns = NS(NULL)) {
  div(`data-display-if`=condition, `data-ns-prefix`=ns(""), ...)
}

#' Create a help text element
#'
#' Create help text which can be added to an input form to provide additional
#' explanation or context.
#'
#' @param ... One or more help text strings (or other inline HTML elements)
#' @return A help text element that can be added to a UI definition.
#'
#' @examples
#' helpText("Note: while the data view will show only",
#'          "the specified number of observations, the",
#'          "summary will be based on the full dataset.")
#' @export
helpText <- function(...) {
  span(class="help-block", ...)
}


#' Create a tab panel
#'
#'
#' @param title Display title for tab
#' @param ... UI elements to include within the tab
#' @param value The value that should be sent when `tabsetPanel` reports
#'   that this tab is selected. If omitted and `tabsetPanel` has an
#'   `id`, then the title will be used.
#' @param icon Optional icon to appear on the tab. This attribute is only
#' valid when using a `tabPanel` within a [navbarPage()].
#' @return A tab that can be passed to [tabsetPanel()]
#'
#' @seealso [tabsetPanel()]
#'
#' @examples
#' # Show a tabset that includes a plot, summary, and
#' # table view of the generated distribution
#' mainPanel(
#'   tabsetPanel(
#'     tabPanel("Plot", plotOutput("plot")),
#'     tabPanel("Summary", verbatimTextOutput("summary")),
#'     tabPanel("Table", tableOutput("table"))
#'   )
#' )
#' @export
#' @describeIn tabPanel Create a tab panel that can be included within a [tabsetPanel()] or a [navbarPage()].
tabPanel <- function(title, ..., value = title, icon = NULL) {
  bslib::nav(title, ..., value = value, icon = icon)
}

#' @export
#' @describeIn tabPanel Create a tab panel that drops the title argument.
#'   This function should be used within `tabsetPanel(type = "hidden")`. See [tabsetPanel()] for example usage.
tabPanelBody <- function(value, ..., icon = NULL) {
  bslib::nav_content(value, ..., icon = icon)
}

#' Create a tabset panel
#'
#' Create a tabset that contains [tabPanel()] elements. Tabsets are
#' useful for dividing output into multiple independently viewable sections.
#'
#' @param ... [tabPanel()] elements to include in the tabset
#' @param id If provided, you can use `input$`*`id`* in your
#'   server logic to determine which of the current tabs is active. The value
#'   will correspond to the `value` argument that is passed to
#'   [tabPanel()].
#' @param selected The `value` (or, if none was supplied, the `title`)
#'   of the tab that should be selected by default. If `NULL`, the first
#'   tab will be selected.
#' @param type  \describe{
#'   \item{`"tabs"`}{Standard tab look}
#'   \item{`"pills"`}{Selected tabs use the background fill color}
#'   \item{`"hidden"`}{Hides the selectable tabs. Use `type = "hidden"` in
#'   conjunction with [tabPanelBody()] and [updateTabsetPanel()] to control the
#'   active tab via other input controls. (See example below)}
#' }
#' @inheritParams navbarPage
#' @return A tabset that can be passed to [mainPanel()]
#'
#' @seealso [tabPanel()], [updateTabsetPanel()],
#'   [insertTab()], [showTab()]
#'
#' @examples
#' # Show a tabset that includes a plot, summary, and
#' # table view of the generated distribution
#' mainPanel(
#'   tabsetPanel(
#'     tabPanel("Plot", plotOutput("plot")),
#'     tabPanel("Summary", verbatimTextOutput("summary")),
#'     tabPanel("Table", tableOutput("table"))
#'   )
#' )
#'
#' ui <- fluidPage(
#'   sidebarLayout(
#'     sidebarPanel(
#'       radioButtons("controller", "Controller", 1:3, 1)
#'     ),
#'     mainPanel(
#'       tabsetPanel(
#'         id = "hidden_tabs",
#'         # Hide the tab values.
#'         # Can only switch tabs by using `updateTabsetPanel()`
#'         type = "hidden",
#'         tabPanelBody("panel1", "Panel 1 content"),
#'         tabPanelBody("panel2", "Panel 2 content"),
#'         tabPanelBody("panel3", "Panel 3 content")
#'       )
#'     )
#'   )
#' )
#'
#' server <- function(input, output, session) {
#'   observeEvent(input$controller, {
#'     updateTabsetPanel(session, "hidden_tabs", selected = paste0("panel", input$controller))
#'   })
#' }
#'
#' if (interactive()) {
#'   shinyApp(ui, server)
#' }
#' @export
tabsetPanel <- function(...,
                        id = NULL,
                        selected = NULL,
                        type = c("tabs", "pills", "hidden"),
                        header = NULL,
                        footer = NULL) {

  func <- switch(
    match.arg(type),
    tabs = bslib::navs_tab,
    pills = bslib::navs_pill,
    hidden = bslib::navs_hidden
  )

  # bslib adds a class to make the content browsable() by default,
  # but that's probably too big of a change for shiny
  remove_first_class(
    func(..., id = id, selected = selected, header = header, footer = footer)
  )
}

#' Create a navigation list panel
#'
#' Create a navigation list panel that provides a list of links on the left
#' which navigate to a set of tabPanels displayed to the right.
#'
#' @param ... [tabPanel()] elements to include in the navlist
#' @param id If provided, you can use `input$`*`id`* in your
#'   server logic to determine which of the current navlist items is active. The
#'   value will correspond to the `value` argument that is passed to
#'   [tabPanel()].
#' @param selected The `value` (or, if none was supplied, the `title`)
#'   of the navigation item that should be selected by default. If `NULL`,
#'   the first navigation will be selected.
#' @param well `TRUE` to place a well (gray rounded rectangle) around the
#'   navigation list.
#' @param fluid `TRUE` to use fluid layout; `FALSE` to use fixed
#'   layout.
#' @param widths Column widths of the navigation list and tabset content areas
#'   respectively.
#' @inheritParams tabsetPanel
#' @inheritParams navbarPage
#'
#' @details You can include headers within the `navlistPanel` by including
#'   plain text elements in the list. Versions of Shiny before 0.11 supported
#'   separators with "------", but as of 0.11, separators were no longer
#'   supported. This is because version 0.11 switched to Bootstrap 3, which
#'   doesn't support separators.
#'
#' @seealso [tabPanel()], [updateNavlistPanel()],
#'    [insertTab()], [showTab()]
#'
#' @examples
#' fluidPage(
#'
#'   titlePanel("Application Title"),
#'
#'   navlistPanel(
#'     "Header",
#'     tabPanel("First"),
#'     tabPanel("Second"),
#'     tabPanel("Third")
#'   )
#' )
#' @export
navlistPanel <- function(...,
                         id = NULL,
                         selected = NULL,
                         header = NULL,
                         footer = NULL,
                         well = TRUE,
                         fluid = TRUE,
                         widths = c(4, 8)) {
  remove_first_class(bslib::navs_pill_list(
    ..., id = id, selected = selected,
    header = header, footer = footer,
    well = well, fluid = fluid, widths = widths
  ))
}

remove_first_class <- function(x) {
  class(x) <- class(x)[-1]
  x
}

#' Create a text output element
#'
#' Render a reactive output variable as text within an application page.
#' `textOutput()` is usually paired with [renderText()] and puts regular text
#' in `<div>` or `<span>`; `verbatimTextOutput()` is usually paired with
#' [renderPrint()] and provides fixed-width text in a `<pre>`.
#'
#' In both functions, text is HTML-escaped prior to rendering.
#'
#' @param outputId output variable to read the value from
#' @param container a function to generate an HTML element to contain the text
#' @param inline use an inline (`span()`) or block container (`div()`)
#'   for the output
#' @return An output element for use in UI.
#' @examples
#' ## Only run this example in interactive R sessions
#' if (interactive()) {
#'   shinyApp(
#'     ui = basicPage(
#'       textInput("txt", "Enter the text to display below:"),
#'       textOutput("text"),
#'       verbatimTextOutput("verb")
#'     ),
#'     server = function(input, output) {
#'       output$text <- renderText({ input$txt })
#'       output$verb <- renderText({ input$txt })
#'     }
#'   )
#' }
#' @export
textOutput <- function(outputId, container = if (inline) span else div, inline = FALSE) {
  container(id = outputId, class = "shiny-text-output")
}

#' @param placeholder if the output is empty or `NULL`, should an empty
#'   rectangle be displayed to serve as a placeholder? (does not affect
#'   behavior when the output is nonempty)
#' @export
#' @rdname textOutput
verbatimTextOutput <- function(outputId, placeholder = FALSE) {
  pre(id = outputId,
    class = "shiny-text-output",
    class = if (!placeholder) "noplaceholder"
  )
}


#' @name plotOutput
#' @rdname plotOutput
#' @export
imageOutput <- function(outputId, width = "100%", height="400px",
                        click = NULL, dblclick = NULL, hover = NULL, brush = NULL,
                        inline = FALSE, fill = FALSE) {

  style <- if (!inline) {
    # Using `css()` here instead of paste/sprintf so that NULL values will
    # result in the property being dropped altogether
    css(width = validateCssUnit(width), height = validateCssUnit(height))
  }


  # Build up arguments for call to div() or span()
  args <- list(
    id = outputId,
    class = "shiny-image-output",
    style = style
  )

  # Given a named list with options, replace names like "delayType" with
  # "data-hover-delay-type" (given a prefix "hover")
  formatOptNames <- function(opts, prefix) {
    newNames <- paste("data", prefix, names(opts), sep = "-")
    # Replace capital letters with "-" and lowercase letter
    newNames <- gsub("([A-Z])", "-\\L\\1", newNames, perl = TRUE)
    names(opts) <- newNames
    opts
  }

  if (!is.null(click)) {
    # If click is a string, turn it into clickOpts object
    if (is.character(click)) {
      click <- clickOpts(id = click)
    }
    args <- c(args, formatOptNames(click, "click"))
  }

  if (!is.null(dblclick)) {
    if (is.character(dblclick)) {
      dblclick <- clickOpts(id = dblclick)
    }
    args <- c(args, formatOptNames(dblclick, "dblclick"))
  }

  if (!is.null(hover)) {
    if (is.character(hover)) {
      hover <- hoverOpts(id = hover)
    }
    args <- c(args, formatOptNames(hover, "hover"))
  }

  if (!is.null(brush)) {
    if (is.character(brush)) {
      brush <- brushOpts(id = brush)
    }
    args <- c(args, formatOptNames(brush, "brush"))
  }

  container <- if (inline) span else div
  res <- do.call(container, args)
  bindFillRole(res, item = fill)
}

#' Create an plot or image output element
#'
#' Render a [renderPlot()] or [renderImage()] within an
#' application page.
#'
#' @section Interactive plots:
#'
#'   Plots and images in Shiny support mouse-based interaction, via clicking,
#'   double-clicking, hovering, and brushing. When these interaction events
#'   occur, the mouse coordinates will be sent to the server as `input$`
#'   variables, as specified by `click`, `dblclick`, `hover`, or
#'   `brush`.
#'
#'   For `plotOutput`, the coordinates will be sent scaled to the data
#'   space, if possible. (At the moment, plots generated by base graphics and
#'   ggplot2 support this scaling, although plots generated by lattice and
#'   others do not.) If scaling is not possible, the raw pixel coordinates will
#'   be sent. For `imageOutput`, the coordinates will be sent in raw pixel
#'   coordinates.
#'
#'   With ggplot2 graphics, the code in `renderPlot` should return a ggplot
#'   object; if instead the code prints the ggplot2 object with something like
#'   `print(p)`, then the coordinates for interactive graphics will not be
#'   properly scaled to the data space.
#'
#' @param outputId output variable to read the plot/image from.
#' @param width,height Image width/height. Must be a valid CSS unit (like
#'   `"100%"`, `"400px"`, `"auto"`) or a number, which will be
#'   coerced to a string and have `"px"` appended. These two arguments are
#'   ignored when `inline = TRUE`, in which case the width/height of a plot
#'   must be specified in `renderPlot()`. Note that, for height, using
#'   `"auto"` or `"100%"` generally will not work as expected,
#'   because of how height is computed with HTML/CSS.
#' @param click This can be `NULL` (the default), a string, or an object
#'   created by the [clickOpts()] function. If you use a value like
#'   `"plot_click"` (or equivalently, `clickOpts(id="plot_click")`),
#'   the plot will send coordinates to the server whenever it is clicked, and
#'   the value will be accessible via `input$plot_click`. The value will be
#'   a named list  with `x` and `y` elements indicating the mouse
#'   position.
#' @param dblclick This is just like the `click` argument, but for
#'   double-click events.
#' @param hover Similar to the `click` argument, this can be `NULL`
#'   (the default), a string, or an object created by the
#'   [hoverOpts()] function. If you use a value like
#'   `"plot_hover"` (or equivalently, `hoverOpts(id="plot_hover")`),
#'   the plot will send coordinates to the server pauses on the plot, and the
#'   value will be accessible via `input$plot_hover`. The value will be a
#'   named list with `x` and `y` elements indicating the mouse
#'   position. To control the hover time or hover delay type, you must use
#'   [hoverOpts()].
#' @param brush Similar to the `click` argument, this can be `NULL`
#'   (the default), a string, or an object created by the
#'   [brushOpts()] function. If you use a value like
#'   `"plot_brush"` (or equivalently, `brushOpts(id="plot_brush")`),
#'   the plot will allow the user to "brush" in the plotting area, and will send
#'   information about the brushed area to the server, and the value will be
#'   accessible via `input$plot_brush`. Brushing means that the user will
#'   be able to draw a rectangle in the plotting area and drag it around. The
#'   value will be a named list with `xmin`, `xmax`, `ymin`, and
#'   `ymax` elements indicating the brush area. To control the brush
#'   behavior, use [brushOpts()]. Multiple
#'   `imageOutput`/`plotOutput` calls may share the same `id`
#'   value; brushing one image or plot will cause any other brushes with the
#'   same `id` to disappear.
#' @param fill Whether or not the returned tag should be treated as a fill item,
#'   meaning that its `height` is allowed to grow/shrink to fit a fill container
#'   with an opinionated height (see [htmltools::bindFillRole()]) with an
#'   opinionated height. Examples of fill containers include `bslib::card()` and
#'   `bslib::card_body_fill()`.
#' @inheritParams textOutput
#' @note The arguments `clickId` and `hoverId` only work for R base graphics
#'   (see the \pkg{\link[graphics:graphics-package]{graphics}} package). They do
#'   not work for \pkg{\link[grid:grid-package]{grid}}-based graphics, such as
#'   \pkg{ggplot2}, \pkg{lattice}, and so on.
#' @return A plot or image output element that can be included in a panel.
#' @seealso For the corresponding server-side functions, see [renderPlot()] and
#'   [renderImage()].
#'
#' @examples
#' # Only run these examples in interactive R sessions
#' if (interactive()) {
#'
#' # A basic shiny app with a plotOutput
#' shinyApp(
#'   ui = fluidPage(
#'     sidebarLayout(
#'       sidebarPanel(
#'         actionButton("newplot", "New plot")
#'       ),
#'       mainPanel(
#'         plotOutput("plot")
#'       )
#'     )
#'   ),
#'   server = function(input, output) {
#'     output$plot <- renderPlot({
#'       input$newplot
#'       # Add a little noise to the cars data
#'       cars2 <- cars + rnorm(nrow(cars))
#'       plot(cars2)
#'     })
#'   }
#' )
#'
#'
#' # A demonstration of clicking, hovering, and brushing
#' shinyApp(
#'   ui = basicPage(
#'     fluidRow(
#'       column(width = 4,
#'         plotOutput("plot", height=300,
#'           click = "plot_click",  # Equiv, to click=clickOpts(id="plot_click")
#'           hover = hoverOpts(id = "plot_hover", delayType = "throttle"),
#'           brush = brushOpts(id = "plot_brush")
#'         ),
#'         h4("Clicked points"),
#'         tableOutput("plot_clickedpoints"),
#'         h4("Brushed points"),
#'         tableOutput("plot_brushedpoints")
#'       ),
#'       column(width = 4,
#'         verbatimTextOutput("plot_clickinfo"),
#'         verbatimTextOutput("plot_hoverinfo")
#'       ),
#'       column(width = 4,
#'         wellPanel(actionButton("newplot", "New plot")),
#'         verbatimTextOutput("plot_brushinfo")
#'       )
#'     )
#'   ),
#'   server = function(input, output, session) {
#'     data <- reactive({
#'       input$newplot
#'       # Add a little noise to the cars data so the points move
#'       cars + rnorm(nrow(cars))
#'     })
#'     output$plot <- renderPlot({
#'       d <- data()
#'       plot(d$speed, d$dist)
#'     })
#'     output$plot_clickinfo <- renderPrint({
#'       cat("Click:\n")
#'       str(input$plot_click)
#'     })
#'     output$plot_hoverinfo <- renderPrint({
#'       cat("Hover (throttled):\n")
#'       str(input$plot_hover)
#'     })
#'     output$plot_brushinfo <- renderPrint({
#'       cat("Brush (debounced):\n")
#'       str(input$plot_brush)
#'     })
#'     output$plot_clickedpoints <- renderTable({
#'       # For base graphics, we need to specify columns, though for ggplot2,
#'       # it's usually not necessary.
#'       res <- nearPoints(data(), input$plot_click, "speed", "dist")
#'       if (nrow(res) == 0)
#'         return()
#'       res
#'     })
#'     output$plot_brushedpoints <- renderTable({
#'       res <- brushedPoints(data(), input$plot_brush, "speed", "dist")
#'       if (nrow(res) == 0)
#'         return()
#'       res
#'     })
#'   }
#' )
#'
#'
#' # Demo of clicking, hovering, brushing with imageOutput
#' # Note that coordinates are in pixels
#' shinyApp(
#'   ui = basicPage(
#'     fluidRow(
#'       column(width = 4,
#'         imageOutput("image", height=300,
#'           click = "image_click",
#'           hover = hoverOpts(
#'             id = "image_hover",
#'             delay = 500,
#'             delayType = "throttle"
#'           ),
#'           brush = brushOpts(id = "image_brush")
#'         )
#'       ),
#'       column(width = 4,
#'         verbatimTextOutput("image_clickinfo"),
#'         verbatimTextOutput("image_hoverinfo")
#'       ),
#'       column(width = 4,
#'         wellPanel(actionButton("newimage", "New image")),
#'         verbatimTextOutput("image_brushinfo")
#'       )
#'     )
#'   ),
#'   server = function(input, output, session) {
#'     output$image <- renderImage({
#'       input$newimage
#'
#'       # Get width and height of image output
#'       width  <- session$clientData$output_image_width
#'       height <- session$clientData$output_image_height
#'
#'       # Write to a temporary PNG file
#'       outfile <- tempfile(fileext = ".png")
#'
#'       png(outfile, width=width, height=height)
#'       plot(rnorm(200), rnorm(200))
#'       dev.off()
#'
#'       # Return a list containing information about the image
#'       list(
#'         src = outfile,
#'         contentType = "image/png",
#'         width = width,
#'         height = height,
#'         alt = "This is alternate text"
#'       )
#'     })
#'     output$image_clickinfo <- renderPrint({
#'       cat("Click:\n")
#'       str(input$image_click)
#'     })
#'     output$image_hoverinfo <- renderPrint({
#'       cat("Hover (throttled):\n")
#'       str(input$image_hover)
#'     })
#'     output$image_brushinfo <- renderPrint({
#'       cat("Brush (debounced):\n")
#'       str(input$image_brush)
#'     })
#'   }
#' )
#'
#' }
#' @export
plotOutput <- function(outputId, width = "100%", height="400px",
                       click = NULL, dblclick = NULL, hover = NULL, brush = NULL,
                       inline = FALSE, fill = !inline) {

  # Result is the same as imageOutput, except for HTML class
  res <- imageOutput(outputId, width, height, click, dblclick,
                     hover, brush, inline, fill)

  res$attribs$class <- "shiny-plot-output"
  res
}

#' @param outputId output variable to read the table from
#' @rdname renderTable
#' @export
tableOutput <- function(outputId) {
  div(id = outputId, class="shiny-html-output")
}

dataTableDependency <- list(
  htmlDependency(
    "datatables",
    "1.10.5",
    src = "www/shared/datatables",
    package = "shiny",
    script = "js/jquery.dataTables.min.js"
  ),
  htmlDependency(
    "datatables-bootstrap",
    "1.10.5",
    src = "www/shared/datatables",
    package = "shiny",
    stylesheet = c("css/dataTables.bootstrap.css", "css/dataTables.extra.css"),
    script = "js/dataTables.bootstrap.js"
  )
)

#' @rdname renderDataTable
#' @export
dataTableOutput <- function(outputId) {
  attachDependencies(
    div(id = outputId, class="shiny-datatable-output"),
    dataTableDependency
  )
}

#' Create an HTML output element
#'
#' Render a reactive output variable as HTML within an application page. The
#' text will be included within an HTML `div` tag, and is presumed to contain
#' HTML content which should not be escaped.
#'
#' `uiOutput` is intended to be used with `renderUI` on the server side. It is
#' currently just an alias for `htmlOutput`.
#'
#' @param outputId output variable to read the value from
#' @param ... Other arguments to pass to the container tag function. This is
#'   useful for providing additional classes for the tag.
#' @param fill If `TRUE`, the result of `container` is treated as _both_ a fill
#'   item and container (see [htmltools::bindFillRole()]), which means both the
#'   `container` as well as its immediate children (i.e., the result of
#'   `renderUI()`) are allowed to grow/shrink to fit a fill container with an
#'   opinionated height. Set `fill = "item"` or `fill = "container"` to treat
#'   `container` as just a fill item or a fill container.
#' @inheritParams textOutput
#' @return An HTML output element that can be included in a panel
#' @examples
#' htmlOutput("summary")
#'
#' # Using a custom container and class
#' tags$ul(
#'   htmlOutput("summary", container = tags$li, class = "custom-li-output")
#' )
#' @export
htmlOutput <- function(outputId, inline = FALSE,
  container = if (inline) span else div, fill = FALSE, ...)
{
  if (any_unnamed(list(...))) {
    warning("Unnamed elements in ... will be replaced with dynamic UI.")
  }
  res <- container(id = outputId, class = "shiny-html-output", ...)
  bindFillRole(
    res, item = isTRUE(fill) || isTRUE("item" == fill),
    container = isTRUE(fill) || isTRUE("container" == fill)
  )
}

#' @rdname htmlOutput
#' @export
uiOutput <- htmlOutput

#' Create a download button or link
#'
#' Use these functions to create a download button or link; when clicked, it
#' will initiate a browser download. The filename and contents are specified by
#' the corresponding [downloadHandler()] defined in the server
#' function.
#'
#' @param outputId The name of the output slot that the `downloadHandler`
#'   is assigned to.
#' @param label The label that should appear on the button.
#' @param class Additional CSS classes to apply to the tag, if any.
#' @param icon An [icon()] to appear on the button. Default is `icon("download")`.
#' @param ... Other arguments to pass to the container tag function.
#'
#' @examples
#' \dontrun{
#' ui <- fluidPage(
#'   downloadButton("downloadData", "Download")
#' )
#'
#' server <- function(input, output) {
#'   # Our dataset
#'   data <- mtcars
#'
#'   output$downloadData <- downloadHandler(
#'     filename = function() {
#'       paste("data-", Sys.Date(), ".csv", sep="")
#'     },
#'     content = function(file) {
#'       write.csv(data, file)
#'     }
#'   )
#' }
#'
#' shinyApp(ui, server)
#' }
#'
#' @aliases downloadLink
#' @seealso [downloadHandler()]
#' @export
downloadButton <- function(outputId,
                           label="Download",
                           class=NULL,
                           ...,
                           icon = shiny::icon("download")) {
  aTag <- tags$a(id=outputId,
                 class=paste('btn btn-default shiny-download-link', class),
                 href='',
                 target='_blank',
                 download=NA,
                 validateIcon(icon),
                 label, ...)
}

#' @rdname downloadButton
#' @export
downloadLink <- function(outputId, label="Download", class=NULL, ...) {
  tags$a(id=outputId,
         class=paste(c('shiny-download-link', class), collapse=" "),
         href='',
         target='_blank',
         download=NA,
         label, ...)
}


#' Create an icon
#'
#' Create an icon for use within a page. Icons can appear on their own, inside
#' of a button, and/or used with [tabPanel()] and [navbarMenu()].
#'
#' @param name The name of the icon. A name from either [Font
#'   Awesome](https://fontawesome.com/) (when `lib="font-awesome"`) or
#'   [Bootstrap
#'   Glyphicons](https://getbootstrap.com/docs/3.3/components/#glyphicons) (when
#'   `lib="glyphicon"`) may be provided. Note that the `"fa-"` and
#'   `"glyphicon-"` prefixes should not appear in name (i.e., the
#'   `"fa-calendar"` icon should be referred to as `"calendar"`). A `name` of
#'   `NULL` may also be provided to get a raw `<i>` tag with no library attached
#'   to it.
#' @param class Additional classes to customize the style of an icon (see the
#'   [usage examples](https://fontawesome.com/how-to-use) for details on
#'   supported styles).
#' @param lib The icon library to use. Either `"font-awesome"` or `"glyphicon"`.
#' @param ... Arguments passed to the `<i>` tag of [htmltools::tags].
#'
#' @return An `<i>` (icon) HTML tag.
#'
#' @seealso For lists of available icons, see <https://fontawesome.com/icons>
#'   and <https://getbootstrap.com/docs/3.3/components/#glyphicons>
#'
#' @examples
#' # add an icon to a submit button
#' submitButton("Update View", icon = icon("redo"))
#'
#' navbarPage("App Title",
#'   tabPanel("Plot", icon = icon("bar-chart-o")),
#'   tabPanel("Summary", icon = icon("list-alt")),
#'   tabPanel("Table", icon = icon("table"))
#' )
#' @export
icon <- function(name, class = NULL, lib = "font-awesome", ...) {

  # A NULL name allows for a generic <i> not tied to any library
  if (is.null(name)) {
    lib <- "none"
  }

  switch(
    lib %||% "",
    "none" = iconTag(name, class = class, ...),
    "font-awesome" = fontawesome::fa_i(name = name, class = class, ...),
    "glyphicon" = iconTag(
      name, class = "glyphicon", class = paste0("glyphicon-", name),
      class = class, ...
    ),
    stop("Unknown icon library: ", lib, ". See `?icon` for supported libraries.")
  )
}

iconTag <- function(name, ...) {
  htmltools::browsable(
    tags$i(..., role = "presentation", `aria-label` = paste(name, "icon"))
  )
}
