typedef struct {
    u8 pad00[0x4D];
    u8 unk4D;
    u8 pad4E[0x7D - 0x4E];
    u8 unk7D;
    u8 pad7E[0xDB - 0x7E];
    u8 unkDB;
    u8 padDC[0xE0 - 0xDC];
    u8 unkE0;
} Actor8FA7C;

void sub_08037FC4(void *, s32);
void sub_0807CB08(void);
s32 sub_0807CE30(void *);
void sub_0808FC48(void *);
void sub_0808FC5C(void *);
void sub_0808FC74(void *);
u8 sub_080915F4(void *);
void sub_08091618(void *);
u16 sub_08091660(void *);

void sub_0808FA7C(Actor8FA7C *arg0) {
    arg0->unkE0 = 6;
    sub_08091618(arg0);
    arg0->unkDB = 0;
    if ((arg0->unk7D & 0x7F) && sub_0807CE30(arg0) != 0) {
        sub_0808FC48(arg0);
        return;
    }
    arg0->unk4D = 4;
    sub_0807CB08();
    if (sub_080915F4(arg0) == 0) {
        sub_0808FC5C(arg0);
        return;
    }
    sub_08037FC4(arg0, sub_08091660(arg0));
    arg0->unk4D = 0xA;
    sub_0808FC74(arg0);
}
