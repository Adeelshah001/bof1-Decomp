extern u8 D_03004F50[];

typedef struct {
    u8 pad00[0x50];
    u8 unk50;
    u8 pad51[0x54 - 0x51];
    u8 unk54;
} Struct080877F0;

u8 sub_0807CAB8(Struct080877F0 *, u32 *);
void sub_08087EC4(Struct080877F0 *);
void sub_08087ED8(Struct080877F0 *);
void sub_08087F28(Struct080877F0 *);
void sub_08087F74(Struct080877F0 *);
void sub_08087F80(Struct080877F0 *);

void sub_080877F0(Struct080877F0 *arg0) {
    u32 sp0;
    u8 val;

    val = arg0->unk50;
    if (val == 1) {
        sub_08087EC4(arg0);
    } else if (val == 2) {
        sub_08087ED8(arg0);
    } else if (val == 3) {
        sub_08087F28(arg0);
    } else {
        val = D_03004F50[0x60];
        arg0->unk54 = val;
        D_03004F50[0x4A] = val + 1;
        while (1) {
            val = sub_0807CAB8(arg0, &sp0);
            if (val == 0) {
                break;
            } else if (val == 1) {
                sub_08087F80(arg0);
                break;
            } else if (val != 2) {
                sub_08087F74(arg0);
                break;
            }
        }
    }
}
