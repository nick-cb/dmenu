/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Iosevka Nerd Font:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#D4D4D4", "#1E1E1E" }, /* "#d1d5da" "#22272e" */
	[SchemeSel] = { "#D4D4D4", "#2D2D30" }, /* "#D4D4D4" "#636e7b" */
	[SchemeSelHighlight] = { "#569CD6", "#2D2D30" }, /* "#6cb6ff" "#636e7b" */
	[SchemeNormHighlight] = { "#569CD6", "#1E1E1E" },/* "#569CD6" "#1E1E1E" */
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

//current_theme=github-dark-default
