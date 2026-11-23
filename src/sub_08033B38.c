typedef struct 
{
  u8 pad00[0x3A];
  u8 active;
  u8 slot;
  u8 kind;
  u8 pad3D[0x61 - 0x3D];
  u8 unk61;
  u8 pad62[0xE8 - 0x62];
  u8 data[0x124 - 0xE8];
} MapObject;
extern MapObject D_03002AB0[];
void sub_0802CCEC(void *);
void sub_080331A0(void *);
void sub_0803324C(void *);
void sub_080332F8(void *);
void sub_08033B88(void *object, s8 value);
void sub_08033BBC(MapObject *object, const u8 *data, u8 kind, u8 slot);
void sub_08033B38(s32 unused, u8 value)
{
  MapObject *first = D_03002AB0;
  u8 *firstValue = (u8 *) first;
  MapObject *objects;
  MapObject *object;
  u8 i;
  u8 *new_var;
  u8 *new_var3;
  MapObject *new_var2;
  firstValue += 0x61;
  *firstValue = value;
  i = 1;
  new_var = &(*firstValue);
  objects = first;
  new_var3 = &(*new_var);
  do
  {
    object = (MapObject *) ((i * (sizeof(*objects))) + ((u32) objects));
    new_var2 = object;
    if (object->active && (!(new_var2->data[8] & 0x40)))
    {
      object->unk61 = *new_var3;
    }
    i++;
  }
  while (i <= 3);
}

void sub_08033B18(s32 object);
