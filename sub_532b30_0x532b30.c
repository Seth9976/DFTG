// 函数名称: sub_532b30
// 虚拟地址: 0x532b30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_532b30(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    int32_t result = arg1
    int32_t edi = 0
    int32_t result_1 = result
    
    if (arg2 s> 0)
        do
            void* esi_1 = *(result + (edi << 2))
            
            if (*(esi_1 + 0x6c) != 0)
                if (*(esi_1 + 0x68) != 0)
                    *(esi_1 + 0xc)
                    *(esi_1 + 0x10)
                    sub_532b30()
                    result = result_1
                
                *(esi_1 + 0x68) = 0
            
            edi += 1
        while (edi s< arg2)
    
    return result
}
