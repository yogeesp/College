#include<stdio.h>
#include<conio.h>
int a_0[30][20],q_1[30],visited_nodes[30],n_8,i_0,j_1,f_5=0,r_2=-1;
void bfs_logic(int v_8) {
    for (i_0=1;i_0<=n_8;i_0++)
    if(a_0[v_8][i_0] && !visited_nodes[i_0])
        q_1[++r_2]=i_0;
    if(f_5<=r_2) {
        visited_nodes[q_1[f_5]]=1;
        bfs_logic(q_1[f_5++]);
    }
}
void main() {
    int v_8;
    printf("\n Enter Vertices_to_represent:");
    scanf("%d",&n_8);
    for (i_0=1;i_0<=n_8;i_0++) {
        q_1[i_0]=0;
        visited_nodes[i_0]=0;
}
printf("\n Enter graph_data especially_in_matrix_format:\n");
for (i_0=1;i_0<=n_8;i_0++)
    for (j_1=1;j_1<=n_8;j_1++)
        scanf("%d",&a_0[i_0][j_1]);
printf("\n Enter Starting_vertex_for_traversal:");
scanf("%d",&v_8);
bfs_logic(v_8);
printf("\n Reachable_nodes_are:\n");
for (i_0=1;i_0<=n_8;i_0++)
if(visited_nodes[i_0])
    printf("%d\t",i_0); 
else
    printf("\n Bfs not_possible_if_not_proper.");
getch();
}