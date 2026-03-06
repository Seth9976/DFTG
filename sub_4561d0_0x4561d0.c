// 函数名称: sub_4561d0
// 虚拟地址: 0x4561d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4561d0()
{
    // 第一条实际指令: int32_t var_32c
    int32_t var_32c
    int32_t eax_1 = __security_cookie ^ &var_32c
    int32_t var_c = eax_1
    
    if (data_6326b0 == 0)
        if (data_6327d4 != 0xffffffff)
            int32_t* ecx_10 = data_126bd88
            data_6327d4 = 0xffffffff
            int32_t var_3c[0xc]
            sub_4c5670(ecx_10, &var_3c)
            eax_1 = sub_4c5920(&var_3c)
        
        @__security_check_cookie@4(var_c ^ &var_32c)
        return eax_1
    
    int32_t var_6c[0xc]
    sub_4c5670(data_126bdbc, &var_6c)
    sub_4c5920(&var_6c)
    int32_t eax_2 = 0
    var_32c = 0
    
    if (data_6326b0 s> 0)
        while (true)
            int32_t* eax_3 = sub_452cc0((&data_632598)[eax_2])
            int32_t* ebx_1 = eax_3
            int32_t esi_1 = ebx_1[0xf]
            ebx_1[0x222] = 0
            char const* const var_344_2
            int32_t var_340_2
            char const* const var_33c_2
            char* ecx_14
            
            if (esi_1 s< 0)
                var_33c_2 = "RollPlayerGui"
                var_340_2 = 0x211
                ecx_14 = "who >= 0"
                var_344_2 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
            else
                eax_3 = sub_425e70()
                
                if (esi_1 s>= eax_3)
                    var_33c_2 = "RollPlayerGui"
                    var_340_2 = 0x212
                    ecx_14 = "who < RollNumPlayers()"
                    var_344_2 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                else if (*ebx_1 != 0)
                    var_33c_2 = "QueueDismissZoomTile"
                    var_340_2 = 0xf0b
                    ecx_14 = "gfx.type == ROLLGFX_TILE"
                    var_344_2 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                else
                    int32_t eax_4 = sub_454d20(ebx_1[0xd])
                    int32_t eax_5 = sub_455cb0(&(&data_62d6e0)[esi_1 * 0x3ec], ebx_1)
                    int32_t var_31c_1 = 0
                    uint32_t var_314[0x8][0x4]
                    _memset(&var_314, 0, 0x8c)
                    eax_3 = ebx_1[0xe]
                    int32_t var_324_1 = eax_4
                    int32_t var_328 = ebx_1[0xf]
                    int32_t var_320_1 = eax_5
                    int32_t var_178 = 1
                    int32_t* var_318_1 = eax_3
                    void var_114
                    __builtin_memcpy(&var_114, &var_328, 0xa0)
                    ebx_1[0x1ed] = 0
                    __builtin_memcpy(&ebx_1[0x1c], &ebx_1[0x5d], 0x104)
                    void var_288
                    __builtin_memcpy(&var_288, &var_178, 0x104)
                    int32_t var_184_1 = 5
                    int32_t var_180_1 = 0
                    __builtin_memcpy(&ebx_1[0x9e], &var_288, 0x10c)
                    ebx_1[0x1aa] = 1
                    
                    if (*(ebx_1 + 0x891) == 0)
                        goto label_4563a2
                    
                    bool cond:2_1 = ebx_1[0xe] != 0
                    *(ebx_1 + 0x891) = 0
                    
                    if (not(cond:2_1))
                        if (data_6cfe4c == 0)
                            goto label_45643e
                        
                        sub_46a420(6)
                        ebx_1[0xe] = 1
                        ebx_1[0x223] = 0x3f800000
                        goto label_4563a2
                    
                    if (data_6cfe4c == 0)
                    label_45643e:
                        var_33c_2 = "GetClient"
                        var_340_2 = 0x75
                        var_344_2 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
                        ecx_14 = "gClient"
                    else
                        sub_46a420(6)
                        ebx_1[0xe] = 0
                        ebx_1[0x223] = 0
                    label_4563a2:
                        ebx_1[0x224].b = 0
                        int32_t xmm0_1
                        
                        if (ebx_1[0xe] != 1)
                            xmm0_1 = (zx.o(0)).d
                        else
                            xmm0_1 = 0x3f800000
                        
                        eax_2 = var_32c + 1
                        ebx_1[0x223] = xmm0_1
                        var_32c = eax_2
                        
                        if (eax_2 s>= data_6326b0)
                            break
                        
                        continue
            
            sub_489550(eax_3, &data_5b2591, ecx_14, var_344_2, var_340_2, var_33c_2)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    data_6326b0 = 0
    @__security_check_cookie@4(var_c ^ &var_32c)
    return eax_2
}
