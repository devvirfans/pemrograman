#include <stdio.h>
#include <stdlib.h>

#define MAXNUM_VERTICES 100
#define Inf 1000000000

typedef struct {
    int n_vertices;
    int n_edges;
    int adjacency_matrix[MAXNUM_VERTICES][MAXNUM_VERTICES];
} Graph;

typedef enum { WHITE, GRAY, BLACK } COLOR;

int compare(const void *a, const void *b) {
    int num1 = *((int *)a);
    int num2 = *((int *)b);

    if (num1 < num2) {
        return -1;
    } else if (num1 > num2) {
        return 1;
    } else {
        return 0;
    }
}

void inisialisasi_graph(Graph *g, int n_v, int n_e) {
    g->n_vertices = n_v;
    g->n_edges = n_e;
    for (int i = 0; i < MAXNUM_VERTICES; i++) {
        for (int j = 0; j < MAXNUM_VERTICES; j++) {
            if (i < n_v && j < n_v) {
                g->adjacency_matrix[i][j] = 0;
            } else {
                g->adjacency_matrix[i][j] = -1;
            }
        }
    }
}

void print_adjacency_matrix(const Graph *g) {
    printf("\t");
    for (int i = 0; i < g->n_vertices; i++) {
        printf("%d\t", i);
    }
    printf("\n");

    for (int i = 0; i < g->n_vertices; i++) {
        printf("%d\t", i);
        for (int j = 0; j < g->n_vertices; j++) {
            printf("%d\t", g->adjacency_matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int cycle = 0;
void DFS_visit(Graph *g, COLOR *vertex_colors, int v, int *finish_time, int *time) {
    printf("%d time = %d\n", v, *time);

    vertex_colors[v] = GRAY;
    (*time)++;

    for (int i = 0; i < g->n_vertices; i++) {
        if (g->adjacency_matrix[v][i] == 1 && vertex_colors[i] != WHITE)
            cycle = 1;
        if (g->adjacency_matrix[v][i] == 1 && vertex_colors[i] == WHITE)
            DFS_visit(g, vertex_colors, i, finish_time, time);
    }

    vertex_colors[v] = BLACK;
    (*time)++;
    finish_time[v] = *time;
}

void DFS(Graph *g, int *finish_time) {
    COLOR vertex_colors[MAXNUM_VERTICES];
    int time = 0;
    for (int i = 0; i < g->n_vertices; i++)
        vertex_colors[i] = WHITE;
    for (int i = 0; i < g->n_vertices; i++)
        finish_time[i] = Inf;
    for (int i = 0; i < g->n_vertices; i++) {
        if (vertex_colors[i] == WHITE)
            DFS_visit(g, vertex_colors, i, finish_time, &time);
    }
    printf("\n");
}

int main() {
    int n_v = 0;
    int n_e = 0;
    int finish_time[MAXNUM_VERTICES];

    Graph g;

    printf("Masukkan jumlah simpul (maksimum %d): ", MAXNUM_VERTICES);
    scanf("%d", &n_v);
    printf("Masukkan jumlah tepi: ");
    scanf("%d", &n_e);

    inisialisasi_graph(&g, n_v, n_e);

    printf("Masukkan adjacency matrix (1 untuk terhubung, 0 untuk terputus):\n");
    for (int i = 0; i < n_v; i++) {
        for (int j = 0; j < n_v; j++) {
            scanf("%d", &g.adjacency_matrix[i][j]);
        }
    }

    printf("Adjacency Matrix:\n");
    print_adjacency_matrix(&g);

    DFS(&g, finish_time);

    if (cycle) {
        printf("Cycle detected\n");
    } else {
        printf("Cycle not detected\n");
    }

    qsort(finish_time, n_v, sizeof(int), compare);

    printf("Waktu selesai dalam urutan topologis: ");
    for (int i = 0; i < n_v; i++) {
        printf("%d ", finish_time[i]);
    }
    printf("\n");

    return 0;
}
