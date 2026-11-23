typedef struct {
    u16 unk0;
    u16 unk2;
    void (*unk4)(void);
} Struct_08027830;

extern u16 D_03002484;

void sub_08027830(Struct_08027830 *arg0) {
    u16 val = arg0->unk0;
    u16 sentinel = 0x8000;
    if (val != sentinel) {
        do {
            if (val == D_03002484) {
                arg0->unk4();
                break;
            }
            arg0++;
            val = arg0->unk0;
        } while (val != sentinel);
    }
}
