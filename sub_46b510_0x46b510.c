// 函数名称: sub_46b510
// 虚拟地址: 0x46b510
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_46b510(int32_t* arg1)
{
    // 第一条实际指令: uint32_t result
    uint32_t result
    
    if (*arg1 != 0 || arg1[0xe] != 2)
        int32_t esi_1 = arg1[0x22a]
        int32_t edx_1 = data_632564
        
        if (esi_1 == edx_1)
            result.b = 1
            return result
        
        if (edx_1 != 0)
            result = zx.d(edx_1.w)
            
            if (result u< data_62d6c8)
                result = result * 0x8ac + data_62d6c4
                
                if (*(result + 0x8a8) == edx_1 && *result == 2
                        && (*(result + 0x54) == esi_1 || *(result + 0x50) == esi_1))
                    result.b = 1
                    return result
        
        if (arg1[0x1aa] s<= 0)
            if (arg1[0x224].b != 0)
                result.b = 1
                return result
        else if (arg1[0xdf] == 3 || arg1[0x224].b != 0)
            result.b = 1
            return result
        
        if (*arg1 == 0)
            if (sub_4542f0(arg1, 3).b != 0)
                result.b = 1
                return result
            
            if (sub_4542f0(arg1, 4).b != 0 || arg1[0x222] f> 0f)
                result.b = 1
                return result
        else if (arg1[0x222] f> 0f)
            result.b = 1
            return result
    
    result.b = 0
    return result
}
