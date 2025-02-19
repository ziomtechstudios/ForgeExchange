using System;
namespace Com.ZiomtechStudios.ForgeExchange
{
    public class RandomDataGen : WorldGenerator
    {
        public void Apply(MapGenerator gameMapGenerator){
            var validEnumVals = (GroundTileType[])Enum.GetValues(typeof(GroundTileType));
            for (int i = 0; i < gameMapGenerator.Width; i++)
            {
                for (int j = 0; j < gameMapGenerator.Length; j++)
                {
                    ///<summary>
                    ///Using Unity's random class to get random val.
                    ///Range is between 0 and GroundTileType Enumerators current length.
                    ///Casting enum random val to underlying int,
                    ///@ current tile in for loop iteration,
                    //with val efined in enum.
                    ///</summary>
                    gameMapGenerator.SetTile(i, j, (int) validEnumVals[UnityEngine.Random.Range(0, validEnumVals.Length)]);
                }
            }
        }
    }
}
