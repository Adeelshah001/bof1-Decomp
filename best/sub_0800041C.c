typedef struct {
    u8 state;
    u8 unk01;
    u8 value;
    u8 pad03;
    u32 data;
    u8 pad08[4];
} Slot;

typedef struct {
    u8 count;
    u8 selected;
    u8 pad02[2];
    u16 unk04;
    u16 unk06;
    Slot slots[6];
} SlotTable;

extern SlotTable D_030016E0;

void sub_0800041C(s8 value)
{
    SlotTable *table = &D_030016E0;
    u8 index = table->selected;
    table = (SlotTable *)((u32)table + index * sizeof(Slot));
    table->slots[0].value = value;
}

u8 sub_08000430(SlotTable *table)
{
    u8 i = 0;

    if (table->slots[0].state != 0) {
        do {
            i++;
            if (i > 4)
                break;
        } while (((SlotTable *)((u32)table + i * sizeof(Slot)))->slots[0].state != 0);
    }
    return i;
}

Slot *sub_080003D8(u32 data, SlotTable *table, u8 index)
{
    u8 slot;
    u32 offset;
    SlotTable *entry;
    u8 zero;
    u8 *storage;

    if (index != 0xFF)
        slot = index;
    else
        slot = sub_08000430(table);

    offset = slot * sizeof(Slot);
    entry = (SlotTable *)((u8 *)table + offset);
    zero = 0;
    entry->slots[0].state = 3;
    entry->slots[0].value = zero;
    storage = (u8 *)table;
    storage += 0x10;
    storage += offset;
    *(u32 *)storage = data;
    table->count++;
    return (Slot *)((u8 *)table + (offset + 8));
}

void sub_0800039C(SlotTable *table)
{
    u8 i, j;
    u8 zero = 0;

    table->count = zero;
    table->unk04 = zero;
    table->unk06 = zero;
    table->selected = 0;
    i = 0;
    do {
        u32 next;
        SlotTable *entry;

        j = 0;
        next = i + 1;
        entry = (SlotTable *)(i * sizeof(Slot) + (u32)table);
        do {
            ((SlotTable *)((u8 *)entry + j))->slots[0].state = 0;
            j++;
        } while (j <= 2);
        i = next;
    } while (i <= 4);
}
