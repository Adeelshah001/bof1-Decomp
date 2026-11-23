extern u8 D_0202DBD0[];

typedef struct {
    u8 pad00[0x204];
    u16 unk204[0x14B];
    u16 unk49A[1];
} Unk0202DBD0;

u8 sub_0805CF40(u16, u16 *);

void sub_08030960(u16 arg0) {
    u16 sp0;
    Unk0202DBD0 *s = (Unk0202DBD0 *)D_0202DBD0;
    u32 idx;
    u8 status;

    idx = s->unk49A[0] + 1;
    s->unk49A[0] = idx;
    s->unk49A[(u16)idx] = arg0;
    status = sub_0805CF40(arg0, &sp0);
    if (status == 0) {
        if (s->unk204[sp0] == arg0) {
            s->unk204[sp0] = status;
        }
    }
}
