typedef struct {
    u8 pad00[0x02];
    u8 unk2;
    u8 pad03[0x09 - 0x03];
    u8 unk9;
    u8 pad0A[0x68 - 0x0A];
    u8 unk68[1];
} Unk6EB4C;

struct Unk2AB0 {
    u8 pad[0x124];
};

extern struct Unk2AB0 D_03002AB0[];
extern u8 D_03004754;

void sub_0807497C(Unk6EB4C *);
void sub_080749F0(Unk6EB4C *);
s32 sub_0808292C(struct Unk2AB0 *);

void sub_0806EB4C(Unk6EB4C *arg0) {
    u8 val = arg0->unk68[arg0->unk9];
    if (val & 0x80) {
        sub_0807497C(arg0);
        return;
    }
    if (sub_0808292C(&D_03002AB0[val]) & 3) {
        arg0->unk9++;
        val = arg0->unk68[arg0->unk9];
        if (val & 0x80) {
            sub_080749F0(arg0);
            return;
        }
    }
    arg0->unk2 = 0x1A;
    D_03004754 = 1;
}
