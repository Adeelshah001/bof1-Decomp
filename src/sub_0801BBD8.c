extern u8 D_03002AB0[];
extern u8 D_03004584[];

void sub_080017EC(s32);
void sub_08072CC4(s32);
void sub_0803EE88(void *);
void sub_08004EA0(s32);
u8 sub_08038458(s32);

void sub_0801BB40(void) {
    sub_08072CC4(0x3C41);
    if (D_03004584[0] == 0) {
        sub_080017EC(0xC7);
        D_03004830[0x2B]++;
    }
}

void sub_0801BB70(void) {
    u8 *p = D_03003420;
    ((Entity *)p)->unk6 = 0xD73C;
    ((Entity *)p)->unk2C = 0xD73C;
    sub_0803EE88(p + 0x80);
    D_03004830[0x2C] = 0x32;
    D_03004830[0x2B]++;
}

void sub_0801BBA4(void) {
    u8 *p;
    u8 *q;
    u32 z;
    sub_08004EA0(0x8198);
    p = D_03002AB0;
    {
        u8 v = p[0xB8] & 0xFB;
        z = 0;
        p[0xB8] = v;
    }
    q = D_03004830;
    q[0x2A] = z;
    q[0x2B] = z;
}

void sub_0801BBD8(void) {
    if (sub_08038458(1) != 0) {
        sub_08004EA0(0x87DE);
        D_03004830[0x2C] = 0x60;
        D_03004830[0x2B]++;
    }
}
