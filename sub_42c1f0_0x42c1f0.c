// 函数名称: sub_42c1f0
// 虚拟地址: 0x42c1f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_42c1f0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    void* ecx = data_6cfe4c
    int32_t edi = data_62b2bc
    char const* const var_18_1
    int32_t var_14_1
    char const* const __saved_esi
    char* ecx_1
    
    if (ecx != 0)
        if (edi s>= 0)
            if (edi s< *(ecx + 0x824))
                bool cond:0 = *(ecx + 0x18) != 3
                var_8 = *(ecx + edi * 0x10 + 0x24)
                
                if (not(cond:0))
                    int32_t eax_4 = *(ecx + 0x14)
                    void* ecx_2 = data_aca0dc
                    
                    if (eax_4 != 0)
                        uint32_t edx_1 = zx.d(eax_4.w)
                        
                        if (edx_1 u< *(ecx_2 + 4))
                            void* esi_2 = edx_1 * 0x4c + *ecx_2
                            
                            if (*(esi_2 + 0x48) == eax_4)
                                int32_t var_14_2 = 0xf42ab
                                sub_48be40(eax_4, 4, esi_2 + 0x3c)
                                sub_48bc20(&var_8, 4, esi_2 + 0x3c, &var_8)
                
                return sub_422fa0(edi)
            
            __saved_esi = "GameClientTrashFriend"
            var_14_1 = 0x723
            ecx_1 = "friendIndex < c.numFriends"
        else
            __saved_esi = "GameClientTrashFriend"
            var_14_1 = 0x722
            ecx_1 = "friendIndex >= 0"
        
        var_18_1 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameclient.cpp"
    else
        __saved_esi = "GetClient"
        var_14_1 = 0x75
        var_18_1 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    
    int32_t eax
    sub_489550(eax, &data_5b2591, ecx_1, var_18_1, var_14_1, __saved_esi)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
