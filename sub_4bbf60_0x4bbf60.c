// 函数名称: sub_4bbf60
// 虚拟地址: 0x4bbf60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4bbf60(int32_t arg1)
{
    // 第一条实际指令: void* result
    void* result
    
    if (arg1 != 0)
        uint32_t esi_1 = zx.d(arg1.w)
        
        if (esi_1 u< data_63e5ac)
            int32_t ecx = data_63e5a8
            result = *(esi_1 * 0x1418 + ecx + 0x1410)
            
            if (result == arg1)
                if (esi_1 u>= data_63e5ac || result != arg1)
                    sub_489550(result, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                        "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                        "DataArray<struct UI2>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                int32_t edx = esi_1 * 0x1418
                int32_t xmm1_1 = *(data_114e818 + 0x2c)
                
                if (*(edx + ecx + 0x98) f+ *(edx + ecx + 0x88) f+ *(edx + ecx + 0x84) f> xmm1_1 ||
                        *(edx + ecx + 0x128) f+ *(edx + ecx + 0x118) f+ *(edx + ecx + 0x114) f> xmm1_1 ||
                        *(edx + ecx + 0x1b8) f+ *(edx + ecx + 0x1a8) f+ *(edx + ecx + 0x1a4) f> xmm1_1 ||
                        *(edx + ecx + 0x248) f+ *(edx + ecx + 0x238) f+ *(edx + ecx + 0x234) f> xmm1_1 || not(
                        *(edx + ecx + 0x2d8) f+ *(edx + ecx + 0x2c8) f+
                        *(edx + ecx + 0x2c4) f<= xmm1_1))
                    result.b = 1
                    return result
    
    result.b = 0
    return result
}
