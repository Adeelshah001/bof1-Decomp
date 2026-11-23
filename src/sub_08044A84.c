extern u8 D_03002AB0[];
typedef struct 
{
  u8 padding[0xA4];
  u16 mode;
} MapState;
extern MapState D_030023E0;
void sub_08030BB0(void *, s32);
void sub_08037FC4(void *, u16);
void sub_0804757C(Entity *);
void sub_0803EE38(Entity *);
u8 sub_080448A4(Entity *, s32);
void sub_08045504(Entity *);
void sub_08045F88(Entity *);
s32 sub_0803A8EC(void *);
void sub_08044A84(Entity *actor)
{
  register s32 zero = 0;
  u8 mode;
 do { actor->unk1C = 0x80; if (sub_080448A4(actor, zero)) { mode = actor->unk60; if ((mode == 3) || (mode == 0)) { actor->unk64 = (u32) sub_08045F88; ((u8 *) actor)[0x6C] = zero; return; } if (mode == 2) { sub_0803EE38(actor); return; } { u16 position = 0x968; *((u16 *) (((u8 *) actor) - -2)) = position; *((u16 *) (((u8 *) actor) - -0x46)) = position; } } actor->unk64 = (u32) sub_08045504; } while (0);
}

void sub_0804494C(Entity *actor);
