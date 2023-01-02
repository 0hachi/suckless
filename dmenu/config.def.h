/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;   /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1; /* -c option; centers dmenu on screen */
static int fuzzy = 1; /* -F  option; if 0, dmenu doesn't use fuzzy matching */
static int min_width = 600; /* minimum width when centered */
static const unsigned int alpha = 0xf0;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {"Source Code Pro:size=12"};
static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = {"#fff", "#26292C"},
    [SchemeSel] = {"#fff", "#2e3135"},
    [SchemeOut] = {"#fff", "#2e3135"},
    [SchemeSelHighlight] = {"#fff", "#2e3135"},
    [SchemeNormHighlight] = {"#fff", "#121415"},
};

static const unsigned int alphas[SchemeLast][2] = {
    [SchemeNorm] = {OPAQUE, alpha},
    [SchemeSel] = {OPAQUE, alpha},
    [SchemeOut] = {OPAQUE, alpha},
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 16;
static unsigned int columns = 2;
static const unsigned int border_width = 1;
static const unsigned long border_color = 0xffffffff;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";