extern const u16 D_080FD4D4[];
extern u16 D_030023E0[];

void sub_0804E238(void *);
void sub_0804E104(void *);

typedef struct {
    u8 pad00[0x61];
    u8 unk61;
} Entity4DB;

void sub_0804DBE4(Entity4DB *arg0) {
    u8 i;
    for (i = 0; !(D_080FD4D4[i] & 0x8000); i += 3) {
        if (D_080FD4D4[i] == D_030023E0[1] && D_080FD4D4[i + 1] == D_030023E0[3]) {
            if (D_080FD4D4[i + 2] != arg0->unk61) {
                arg0->unk61 = D_080FD4D4[i + 2];
                sub_0804E238(arg0);
                sub_0804E104(arg0);
            }
            break;
        }
    }
}
