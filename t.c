

#define foomacro(foo, bar, baz) foo #bar #baz
#define _foo _bar
#define _bar _foo

_foo

enum { N = 4 };

struct sz { int foo; int bar; };

typedef struct gggg {
    int f_boo;
} ***foo[N*2+sizeof(struct sz)][N*N], foonp;

typedef struct bar {
    int f_bar;
} ***const bar[N*2+sizeof(struct sz)][N*N*N], foon,
    ass[14]

    ,

    *quux     /*boo*/;

typedef struct baz baz;
struct baz {
    int f_baz;
};

enum {
    FOO = N
};

struct quux {
    int f_quux;
};
typedef struct quux quux;

struct b;

struct a {
    void (*call)(struct b *foo);
};

struct b {
    int in_b;
};

struct rec {
    struct rec *rec;
};

union u {
    int a;
    char *b;
};

struct xx *fooxx(int foo);
void foovv(int foo);
