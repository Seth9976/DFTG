// 函数名称: sub_425b60
// 虚拟地址: 0x425b60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_425b60(void* arg1)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    void* result = arg1
    void* ecx = data_6cfe4c
    
    if (ecx != 0)
        var_8 = *sub_426880(ecx + 0x848, result)
        result = data_6cfe4c
        
        if (result != 0)
            if (*(result + 0x18) == 3)
                result = *(result + 0x14)
                void* ecx_2 = data_aca0dc
                
                if (result != 0)
                    uint32_t edx_1 = zx.d(result.w)
                    
                    if (edx_1 u< *(ecx_2 + 4))
                        void* esi_2 = edx_1 * 0x4c + *ecx_2
                        
                        if (*(esi_2 + 0x48) == result)
                            int32_t var_10_1 = 0xf42ad
                            sub_48be40(result, 4, esi_2 + 0x3c)
                            return sub_48bc20(&var_8, 4, esi_2 + 0x3c, &var_8)
            
            return result
    
    sub_489550(result, &data_5b2591, "gClient", 
        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
