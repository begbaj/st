/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0c0d0e", /* black   */
  [1] = "#e31a1c", /* red     */
  [2] = "#31a354", /* green   */
  [3] = "#dca060", /* yellow  */
  [4] = "#3182bd", /* blue    */
  [5] = "#756bb1", /* magenta */
  [6] = "#80b1d3", /* cyan    */
  [7] = "#b7b8b9", /* white   */

  /* 8 bright colors */
  [8]  = "#737475", /* black   */
  [9]  = "#e31a1c", /* red     */
  [10] = "#31a354", /* green   */
  [11] = "#dca060", /* yellow  */
  [12] = "#3182bd", /* blue    */
  [13] = "#756bb1", /* magenta */
  [14] = "#80b1d3", /* cyan    */
  [15] = "#fcfdfe", /* white   */

  /* special colors */
  [256] = "#0c0d0e", /* background */
  [257] = "#b7b8b9", /* foreground */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
unsigned int defaultcs = 257;
static unsigned int defaultrcs = 257;

/*
 * Colors used, when the specific fg == defaultfg. So in reverse mode this
 * will reverse too. Another logic would only make the simple feature too
 * complex.
 */
// static unsigned int defaultitalic = 7;
// static unsigned int defaultunderline = 7;
