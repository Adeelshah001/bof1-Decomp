extern u16 D_03004114;
extern const u8 D_080F872C[];
extern const u8 D_080F8736[];
extern const u8 D_080F8872[];
extern const u8 D_080F887A[];

typedef struct {
    u8 pad[0x3E];
    u8 unk3E;
} Struct_0802632C;

typedef struct {
    u8 pad[0xA8];
    u16 unkA8;
} Struct_030023E0;
extern Struct_030023E0 D_030023E0;

u8 sub_08027980(void *, const void *, void *);
u8 sub_080280FC(void *, const void *);
void sub_08028140(void *);
u8 sub_08028210(void *);
u8 sub_08023374(void);
u8 sub_08023314(void);

u16 sub_08026398(void *arg0) {
    void *sp0;
    u8 var_r4 = 0;

    if (sub_08027980(arg0, D_080F8736, &sp0)) {
        var_r4 = sub_080280FC(sp0, D_080F887A);
    }
    D_03004114 = var_r4;
    return var_r4;
}

u16 sub_0802635C(void *arg0) {
    void *sp0;
    u8 var_r4 = 0;

    if (sub_08027980(arg0, D_080F872C, &sp0)) {
        var_r4 = sub_080280FC(sp0, D_080F8872);
    }
    D_03004114 = var_r4;
    return var_r4;
}

u16 sub_0802632C(Struct_0802632C *arg0) {
    u8 var_r4 = 0;

    if (arg0->unk3E == 7) {
        var_r4 = sub_08028210(arg0);
    } else {
        sub_08028140(arg0);
    }
    D_03004114 = var_r4;
    return var_r4;
}

void sub_0802644C(void) {
    u8 var_r0;

    if (D_030023E0.unkA8 != 0xB4) {
        var_r0 = sub_08023374();
    } else {
        var_r0 = sub_08023314();
    }
    D_03004114 = var_r0;
}
