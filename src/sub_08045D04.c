extern u8 D_03001850[];
extern u8 D_03003F98[];
void sub_08037FC4(void *, u16);
u16 sub_08037C98(void *, s32);
void sub_080379D4(s32);
s32 sub_0803A8EC(void *);
void sub_0804515C(void *);
void sub_080451F8(Entity *);
void sub_08045DB4(Entity *);
void sub_08045D40(Entity *);
void sub_08045D80(Entity *);
void sub_08045D04(Entity *actor)
{
    if (*D_03001850 == ((u8 *)actor)[0x5C]) {
        void (*callback)(Entity *);
        sub_08037FC4(actor, 0x12);
        callback = sub_08045D40;
        actor->unk64 = (u32)callback;
        callback(actor);
    } else {
        sub_0803A8EC(actor);
    }
}

