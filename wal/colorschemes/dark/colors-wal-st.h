const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#121312", /* black   */
  [1] = "#6D7370", /* red     */
  [2] = "#7D8079", /* green   */
  [3] = "#86847B", /* yellow  */
  [4] = "#7A8484", /* blue    */
  [5] = "#8F928F", /* magenta */
  [6] = "#A5A19A", /* cyan    */
  [7] = "#d0cecc", /* white   */

  /* 8 bright colors */
  [8]  = "#91908e",  /* black   */
  [9]  = "#6D7370",  /* red     */
  [10] = "#7D8079", /* green   */
  [11] = "#86847B", /* yellow  */
  [12] = "#7A8484", /* blue    */
  [13] = "#8F928F", /* magenta */
  [14] = "#A5A19A", /* cyan    */
  [15] = "#d0cecc", /* white   */

  /* special colors */
  [256] = "#121312", /* background */
  [257] = "#d0cecc", /* foreground */
  [258] = "#d0cecc",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
