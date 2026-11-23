extern const u16 D_080FD310[];
void *Entity_FindFreeSlot(void);
u8 sub_08003104(void);
void sub_080379D4(s32 sound);
void sub_0804ADCC(Entity *actor)
{
  u8 *new_var;
  Entity *slot = Entity_FindFreeSlot();
  if (slot != NULL)
  {
    u8 *state;
    u32 zero;
    u8 index;
    const u16 *offsets;
    const u16 *dx;
    const u16 *dy;
    u16 x;
    u16 y;
    new_var = ((u8 *) slot) + 0x3C;
    state = new_var;
    zero = 0;
    *state = 8;
    state -= 2;
    *state = 1;
    slot->unk3B = zero;
    state += 7;
    *state = 0xC;
    index = sub_08003104() & 7;
    index <<= 1;
    offsets = D_080FD310;
    dx = (const u16 *) (((u32) offsets) + (index << 1));
    x = *dx;
    x += 0xB98;
    *((u16 *) (((u8 *) slot) + 2)) = x;
    dy = (const u16 *) (((u32) offsets) + ((index - -1) << 1));
    y = *dy;
    y += 0x81C;
    slot->unk6 = y;
    slot->unk2C = actor->unk6;
    sub_080379D4(0x23);
  }
}

