/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;
static int centered = 0;
static int fuzzy = 1;

static const unsigned int alpha = OPAQUE; /* 0xe6  */
static const unsigned int border_width = 0;
static const unsigned long border_color = 0x474645;

static int min_width = 0;
static unsigned int lines = 0;
static unsigned int lineheight = 31;
// static unsigned int min_lineheight = 8;
static unsigned int columns = 1;

static const char *fonts[] = {"Source Code Pro:size=11"};
static const char *prompt = NULL;
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = {"#fff", "#26292C"},
    [SchemeSel] = {"#fff", "#2e3135"},
    [SchemeOut] = {"#fff", "#2e3135"},
    [SchemeSelHighlight] = {"#fff", "#121415"},
    [SchemeNormHighlight] = {"#fff", "#121415"},
    [SchemeInputField] = {"#fff", "#2e3135"},
    [SchemePrompt] = {"#fff", "#26292C"}};

static const unsigned int alphas[SchemeLast][2] = {
    [SchemeNorm] = {OPAQUE, alpha},
    [SchemeSel] = {OPAQUE, alpha},
    [SchemeOut] = {OPAQUE, alpha},
    [SchemeSelHighlight] = {OPAQUE, alpha},
    [SchemeNormHighlight] = {OPAQUE, alpha},
    [SchemeInputField] = {OPAQUE, alpha}};

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";