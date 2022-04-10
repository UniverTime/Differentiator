
#include "../include/differentiator.h"

void differentiator(void)
{
    Node* root = do_data_loading();//"data.txt");

    //graph_tree_dump(root);

    printf("\n");

    //print_in(root);

        FILE* tex_file = fopen("Article.tex", "w");

        assert(tex_file);

        do_header(tex_file);

    Node* diff_root = diff_node(root);

    tree_destruct(root);

    //graph_tree_dump(diff_root);

    do_tree_simplify(&diff_root);

    pro_print(diff_root);

    //graph_tree_dump(diff_root);

    ///finish_latex_document(diff_root);

    //print_in(diff_root);

        fprintf(tex_file, "f$^{'}$ = $");

        forming_notes(tex_file, diff_root);

        fprintf(tex_file, "%s%s","$",latex_end);

    tree_destruct(diff_root);

    fclose(tex_file);

    //graph_tree_dump(root);

    /*Node* copy =  tree_cpy(root);

    graph_tree_dump(copy);

    tree_destruct(copy);*/

    //graph_tree_dump(root);

    //tree_destruct(root);
}





