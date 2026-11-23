void sub_08083484(void *);
void sub_0807B838(void *, s8);

void sub_0807B810(void *arg0) {
    u8 val = (((u8 *)arg0)[0xE2] >> 4) + 0x3D;
    ((u8 *)arg0)[0xE1] = val;
    sub_08083484(arg0);
    sub_0807B838(arg0, 0xD);
}
