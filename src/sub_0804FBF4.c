
s32 sub_08037C98(void *, s32);
void sub_0803A8EC(void *);
void sub_0803EE6C(void *);
void sub_080470B4(void);
void *Entity_FindFreeSlot(void);
void sub_0804F518(void);
void sub_0805009C(void);
void sub_080379D4(s32);
extern u16 D_080FD57E[];

void sub_0804FBF4(void *arg0) {
    if ((sub_08037C98(arg0, 1) << 0x10) != 0) {
        sub_0803A8EC(arg0);
    } else {
        sub_0803EE6C(arg0);
    }
}

void sub_0804FC18(void *arg0) {
    Entity *temp_r0;
    s8 *temp_r1;

    temp_r0 = Entity_FindFreeSlot();
    if (temp_r0 != NULL) {
        temp_r0->pad55[0] = (s8) (((Entity *)arg0)->pad55[0] + 3);
        temp_r0->unk64 = (u32)&sub_0804F518;
        temp_r1 = (s8 *)&temp_r0->pad55[0] - 1;
        *temp_r1 = 0x3C;
        *(temp_r1 - 0x1A) = 1;
    }
}

void sub_0804FC50(void *arg0) {
    Entity *temp_r0;
    u16 val;

    temp_r0 = Entity_FindFreeSlot();
    if (temp_r0 != NULL) {
        u8 idx = ((Entity *)arg0)->pad55[0] * 2;
        temp_r0->unk6 = D_080FD57E[idx];
        val = D_080FD57E[idx + 1];
        temp_r0->unk6 = val;
        temp_r0->unk2C = val;
        temp_r0->unk64 = (u32)&sub_0805009C;
        sub_080379D4(2);
        temp_r0->unk3A = 1;
    }
}
