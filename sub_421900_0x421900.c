// 函数名称: sub_421900
// 虚拟地址: 0x421900
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_421900(int32_t arg1)
{
    // 第一条实际指令: sub_4361a0(0)
    sub_4361a0(0)
    data_62b1a8 = 0x21
    int32_t* eax = sub_4361a0(3)
    void* ebx = data_6cfe4c
    char const* const var_30
    int32_t var_2c
    char const* const var_28_2
    char* ecx
    
    if (ebx != 0)
        eax = sub_426880(ebx + 0x848, arg1)
        void* ecx_2 = data_6cfe4c
        int32_t* var_c_1 = eax
        *(ebx + 0x834) = 2
        *(ebx + 0x838) = arg1
        
        if (ecx_2 == 0)
            goto label_421933
        
        *(ecx_2 + 0xa68) = 0xffffffff
        eax = sub_425de0()
        int32_t* ebx_1 = eax
        int32_t edi_1 = 0
        
        if (ebx_1[0x3b] s> 0)
            void* esi_1 = &ebx_1[0xa]
            
            while (true)
                eax = *(esi_1 - 4)
                
                if (eax != 0x3e8 && eax != 0x3e9)
                    if (eax != 1)
                    label_4219c5:
                        edi_1 += 1
                        esi_1 += 0x2c
                        
                        if (edi_1 s>= ebx_1[0x3b])
                            goto label_421a2e
                        
                        continue
                    else
                        eax = sub_437f10(*(data_6d00d8 + 0xbe4))
                        
                        if (*esi_1 != eax[0x8c])
                            goto label_4219c5
                
                sub_421710(*((edi_1 + 1) * 0x2c + ebx_1))
                int32_t var_18 = 2
                *(ebx + 0xc) = 0
                *(ebx + 0x10) = 0
                eax = data_6cfe4c
                
                if (eax == 0)
                    break
                
                int32_t eax_3 = eax[0x29a]
                int32_t var_14 = eax_3
                int32_t var_10 = var_c_1[eax_3 * 6 + 0x48]
                return sub_45d9c0(var_c_1, &var_18)
            
            goto label_421933
        
    label_421a2e:
        var_28_2 = "GameSetLocalWho"
        var_2c = 0x4a9
        var_30 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameclient.cpp"
        ecx = "Halt"
    else
    label_421933:
        var_28_2 = "GetClient"
        var_2c = 0x75
        var_30 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx = "gClient"
    
    sub_489550(eax, &data_5b2591, ecx, var_30, var_2c, var_28_2)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
