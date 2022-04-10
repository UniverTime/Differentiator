
#ifndef LATEX_

#define LATEX_

#include "differentiator.h"
#include "../HashTable/include/hash_table.h"

//=====================================

void do_header(FILE* tex_file);
void do_latex_document(Node* root);
void forming_notes(FILE* tex_file, Node* node);
void latex_node_fmt(FILE* tex_file, Node* node);

//===============================================


const char *const latex_header =
"\\documentclass{article}\n"
"\\usepackage[utf8]{inputenc}\n"
"\\usepackage[english, russian]{babel}\n"
"\\usepackage{amsmath}\n"
"\\title{Kak delat laby u Pedtrovicha}\n"
"\\usepackage[left=3cm,right=3cm,\n"
"    top=2cm,bottom=2cm,bindingoffset=0cm]{geometry}\n"
"\\usepackage{graphicx}\n"
"\\graphicspath{{pictures/}}\n"
"\\DeclareGraphicsExtensions{.pdf,.png,.jpg}\n"
"\\usepackage{amsfonts}\n"
"\\usepackage{amssymb}\n"
"\\usepackage{comment}\n"
"\\usepackage[unicode, pdftex]{hyperref}\n"
"\\usepackage{xcolor}\n"
"\\begin{document}\n"
"\\maketitle\n";

const char *const latex_end = "\n\\end{document}";

#endif // LATEX_
