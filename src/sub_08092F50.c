void sub_08037FC4(void *, u16);
void sub_08095EFC(void *);
void sub_08096A4C(void *);
void sub_08096FF8(void *, u32, u8, u8);
extern const u8 D_08152E1C[];
struct Unk92F50
{
  u8 pad00[0x06];
  u16 unk6;
  u8 pad08[0x2C - 0x08];
  u16 unk2C;
  u8 pad2E[0x4C - 0x2E];
  u8 unk4C;
  u8 pad4D[0x54 - 0x4D];
  u8 unk54;
  u8 unk55;
  u8 pad56[0x78 - 0x56];
  u32 unk78;
};
inline u16 inline_fn(struct Unk92F50 *arg0)
{
  return arg0->unk6;
}

void sub_08092F50(struct Unk92F50 *entity)
{
  u8 *timer = &entity->unk54;
  int new_var;
  if ((--(*timer)) == 0)
  {
    sub_08096FF8(entity, entity->unk78, (D_08152E1C + 1)[entity->unk55 * 2], (D_08152E1C + 1)[new_var = (entity->unk55 * 2) + 1]);
    entity->unk2C = inline_fn(entity);
    *timer = 3;
    if (entity->unk55 == 2)
    {
      entity->unk4C++;
      sub_08037FC4(entity, 0);
      sub_08095EFC(entity);
      return;
    }
    sub_08096A4C(entity);
  }
}

