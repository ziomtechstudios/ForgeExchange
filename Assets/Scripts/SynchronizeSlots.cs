using Com.ZiomtechStudios.ForgeExchange;

public static class SynchronizeSlots
{
    public static void SyncSlots(SlotController[] currentSlots, SlotController[] referecedSlots)
    {
        for (int i = 0; i < currentSlots.Length; i++)
        {
            currentSlots[i].ItemImage.sprite = referecedSlots[i].ItemImage.sprite;
            currentSlots[i].SlotWithItem = referecedSlots[i].SlotWithItem;
            currentSlots[i].ItemCont = referecedSlots[i].ItemCont;
            currentSlots[i].SlotPrefab = referecedSlots[i].SlotPrefab;
            currentSlots[i].CurStackQuantity = referecedSlots[i].CurStackQuantity;
            currentSlots[i].CounterTMPro.text = referecedSlots[i].CounterTMPro.text;
        }
    }
}
