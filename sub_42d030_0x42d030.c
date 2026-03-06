// 函数名称: sub_42d030
// 虚拟地址: 0x42d030
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_42d030(int32_t arg1)
{
    // 第一条实际指令: int32_t ebx = arg1
    int32_t ebx = arg1
    void* result = sub_4b2440(ebx, sub_42bb20)
    void* ecx_1 = data_6cfe4c
    char const* const var_34_1
    int32_t var_30_1
    char const* const var_2c_9
    char* ecx_2
    
    if (ecx_1 != 0)
        int32_t ecx_3 = *(ecx_1 + 0x824)
        int32_t edi_1 = data_62b2b4
        int32_t var_1c_1 = edi_1
        int32_t eax_2 = edi_1 * 6
        int32_t eax_3 = ecx_3 - eax_2 + 1
        
        if (eax_3 s> 6)
            eax_3 = 6
        
        sub_4a8830(eax_3, &data_62bd94, ebx, eax_3, 0xffffffff)
        void* eax_5 = sub_437f10(*(data_6d00d8 + 0xbe4)) + 0x234
        result = sub_4a8930(eax_5, &data_62bee4, ebx, eax_5, 0xffffffff)
        
        if (edi_1 != 0)
            int32_t var_2c_1 = 0xffffffff
            result = sub_4a8570(ebx)
        
        if (edi_1 s< ecx_3 s/ 6)
            int32_t var_2c_2 = 0xffffffff
            result = sub_4a8570(ebx)
        
        int32_t esi_4 = 0
        
        if (eax_3 s<= 0)
            return result
        
        while (true)
            if (esi_4 != 0 || edi_1 != 0)
                int32_t eax_7 = sub_426ed0(esi_4 * 0x24 + &data_1512640, ebx, "tblFriends", esi_4)
                result = sub_4bab10(esi_4)
                
                if (result != eax_7)
                    var_2c_9 = "UI2Selector::LookupForce"
                    var_30_1 = 0x173
                    var_34_1 = "d:\ax\trunk\ax2017\engine\ui2.h"
                    ecx_2 = "UI2GetHandle(arg_root, arg_name, arg_idx) == retval"
                    break
                
                if (eax_7 != 0)
                    result = data_6cfe4c
                    
                    if (result == 0)
                        goto label_42d055
                    
                    int32_t ebx_4 = (eax_2 - 1 + esi_4) << 4
                    void* eax_8 = result + ebx_4
                    sub_4a8930(eax_8 + 0x2c, &data_62be04, eax_7, eax_8 + 0x2c, 0xffffffff)
                    sub_465a40(*(eax_8 + 0x30))
                    int32_t var_34_3 = 0xffffffff
                    sub_4a8570(eax_7)
                    result = data_6cfe4c
                    
                    if (result == 0)
                        goto label_42d055
                    
                    if (*(ebx_4 + result + 0x30) s< 0)
                        int32_t var_2c_6 = 0xffffffff
                        sub_4a8570(eax_7)
                    else if (data_62b2b0 == 1)
                        int32_t edx_12 = 0
                        void* eax_20 = sub_426fb0() + 0x20
                        
                        while (*(eax_20 - 4) != 1 || *eax_20 != *(ebx_4 + result + 0x28))
                            edx_12 += 1
                            eax_20 += 0x2c
                            
                            if (edx_12 s>= 5)
                                break
                    
                    int32_t var_2c_7 = 0xffffffff
                    sub_4a8570(eax_7)
                    int32_t eax_16 = sub_425c70(*(eax_8 + 0x28))
                    
                    if (eax_16 != 1 && eax_16 != 2)
                        result = eax_16 - 3
                        
                        if (eax_16 != 3)
                            var_2c_9 = "FriendsUpdate"
                            var_30_1 = 0xcff
                            var_34_1 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp"
                            ecx_2 = "Halt"
                            break
                    
                    int32_t var_2c_8 = 0xffffffff
                    result = sub_4a8570(eax_7)
                    ebx = arg1
                
                edi_1 = var_1c_1
            else
                int32_t var_2c_3 = edi_1
                result = sub_4a8570(ebx)
            
            esi_4 += 1
            
            if (esi_4 s>= eax_3)
                return result
    else
    label_42d055:
        var_2c_9 = "GetClient"
        var_30_1 = 0x75
        var_34_1 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_2 = "gClient"
    
    sub_489550(result, &data_5b2591, ecx_2, var_34_1, var_30_1, var_2c_9)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
