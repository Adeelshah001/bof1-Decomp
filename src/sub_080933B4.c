void sub_08037FC4(void *, u16);
void sub_08095EFC(void *);
void sub_0809568C(void *, u16);
void sub_08096FF8(void *, u32, u8, u8);
extern const u8 D_08152E2C[];
struct Unk933B4
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
inline u16 inline_fn(struct Unk933B4 *arg0)
{
  return arg0->unk6;
}

void sub_080933B4(struct Unk933B4 *entity)
{
  u8 *timer = &entity->unk54;
  int new_var;
  if ((--(*timer)) == 0)
  {
    sub_08096FF8(entity, entity->unk78, (D_08152E2C + 1)[entity->unk55 * 2], (D_08152E2C + 1)[new_var = (entity->unk55 * 2) + 1]);
    entity->unk2C = inline_fn(entity);
    *timer = 3;
    if (entity->unk55 == 7)
    {
      entity->unk4C++;
      sub_08037FC4(entity, 2);
      sub_08095EFC(entity);
      return;
    }
    entity->unk55++;
    sub_0809568C(entity, 0xB);
  }
}
