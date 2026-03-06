// 函数名称: sub_43d170
// 虚拟地址: 0x43d170
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_43d170(void* arg1)
{
    // 第一条实际指令: int32_t edx_3 = data_138a660
    int32_t edx_3 = data_138a660
    int32_t i_2 = data_138a714
    int32_t i = i_2 + 1
    data_138a714 = i
    int32_t i_1
    
    if (i s<= edx_3)
        i_1 = data_1410464
    else
        data_138a660 = edx_3 + 0x64
        int32_t var_c_1 = (edx_3 + 0x64) << 2
        int32_t var_10_1 = data_1410464
        i = sub_57fb2f()
        i_1 = i
        data_1410464 = i_1
    
    if (i_2 != 0)
        int64_t xmm0_1 = *(arg1 + 0x10)
        
        do
            int32_t eax_2
            int32_t edx_1
            edx_1:eax_2 = sx.q(i_2 - 1)
            i = (eax_2 - edx_1) s>> 1
            void* edx_2 = *(i_1 + (i << 2))
            
            if (xmm0_1 f<= *(edx_2 + 0x10))
                break
            
            *(i_1 + (i_2 << 2)) = edx_2
            i_2 = i
        while (i != 0)
    
    *(i_1 + (i_2 << 2)) = arg1
    return i
}
