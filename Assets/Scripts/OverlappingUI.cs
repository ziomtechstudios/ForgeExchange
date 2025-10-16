using UnityEngine;

namespace Com.ZiomtechStudios.ForgeExchange
{
    public static class OverlappingUI
    {
        public static bool Overlapping(RectTransform rect1, RectTransform rect2)
        {
            return GetWorldRect(rect1).Overlaps(GetWorldRect(rect2));
        }
        public static Rect GetWorldRect(RectTransform rect)
        {
            Vector3[] corners = new Vector3[4];
            rect.GetWorldCorners(corners);
            Vector3 topLeft = corners[0];
            Vector2 size = new Vector2(rect.rect.width * rect.lossyScale.x, rect.rect.height * rect.lossyScale.y);
            return new Rect(topLeft.x, topLeft.y, size.x, size.y);
        }
    }
}
