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

void sub_08045D80(Entity *actor)
{
    if (*D_03001850 == ((u8 *)actor)[0x5C]) {
        void (*callback)(Entity *);
        sub_08037FC4(actor, 0x10);
        callback = sub_08045DB4;
        actor->unk64 = (u32)callback;
        callback(actor);
    }
}

void sub_08045D40(Entity *actor)
{
    if (sub_08037C98(actor, 1) == 0) {
        u16 *counter;
        u16 remaining;
        u8 zero;
        sub_080379D4(0x21);
        counter = (u16 *)((u8 *)actor + 0x46);
        remaining = *counter - 1;
        zero = 0;
        *counter = remaining;
        *D_03001850 = zero;
        actor->unk64 = (u32)sub_08045D80;
    } else {
        sub_0803A8EC(actor);
    }
}

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

void sub_08045CB8(Entity *actor)
{
    Entity *entity = actor;
    u8 *bytes = (u8 *)actor;
    if (0x80 & *D_03003F98) {
        *D_03003F98 = 0;
        *(u16 *)(bytes + 0x38) = 0x20;
        actor->unk64 = (u32)sub_080451F8;
        bytes[0x55] = 0x98;
        bytes[0x54] = 4;
        bytes[0x61] = 0x18;
    }
    sub_0804515C(entity);
    sub_0803A8EC(entity);
}
