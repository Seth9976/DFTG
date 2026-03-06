// 函数名称: sub_421ad0
// 虚拟地址: 0x421ad0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_421ad0(int32_t arg1)
{
    // 第一条实际指令: void* ecx = data_6cfe4c
    void* ecx = data_6cfe4c
    void* result
    
    if (ecx != 0)
        int32_t* eax = sub_426880(ecx + 0x848, arg1)
        
        if (eax[0x44] != 0)
            return sub_421a70(arg1)
        
        data_62b220 = 0x17
        int32_t var_8 = *eax
        result = data_6cfe4c
        
        if (result != 0)
            if (*(result + 0x18) == 3)
                int32_t ecx_3 = *(result + 0x14)
                void* edx_1 = data_aca0dc
                
                if (ecx_3 != 0)
                    uint32_t esi_1 = zx.d(ecx_3.w)
                    
                    if (esi_1 u< *(edx_1 + 4))
                        void* esi_3 = esi_1 * 0x4c + *edx_1
                        
                        if (*(esi_3 + 0x48) == ecx_3)
                            int32_t var_18_2 = 0xf42b1
                            sub_48be40(result, 4, esi_3 + 0x3c)
                            sub_48bc20(&var_8, 4, esi_3 + 0x3c, &var_8)
                            result = data_6cfe4c
            
            if (result != 0)
                *(result + 0x840) = arg1
                *(result + 0x83c) = 2
                return result
    
    sub_489550(result, &data_5b2591, "gClient", 
        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
