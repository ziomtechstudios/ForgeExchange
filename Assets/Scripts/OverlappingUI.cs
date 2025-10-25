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
        public static bool IsInside(RectTransform outerRect, RectTransform innerRect)
        {
            Vector3[] innerRectCorners = new Vector3[4];
            Vector3[] outerRectCorners =  new Vector3[4];
            innerRect.GetWorldCorners(innerRectCorners);
            outerRect.GetWorldCorners(outerRectCorners);
            Rect outerTempRect = new Rect(outerRectCorners[0], (outerRectCorners[2]-outerRectCorners[0]));
            foreach (Vector3 corner in innerRectCorners)
            {
                if (!outerTempRect.Contains(corner))
                    return false;
            }
            return true;
        }
        public static bool IsInside(RectTransform outerRect, RectTransform innerRect, Vector3 offSet)
        {
            Vector3[] innerRectCorners = new Vector3[4];
            Vector3[] outerRectCorners =  new Vector3[4];
            innerRect.GetWorldCorners(innerRectCorners);
            outerRect.GetWorldCorners(outerRectCorners);
            Rect outerTempRect = new Rect(outerRectCorners[0], (outerRectCorners[2]-outerRectCorners[0]));
            foreach (Vector3 corner in innerRectCorners)
            {
                if (!outerTempRect.Contains(corner + offSet))
                    return false;
            }
            return true;
        }
    }
}
