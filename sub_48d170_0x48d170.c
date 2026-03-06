// 函数名称: sub_48d170
// 虚拟地址: 0x48d170
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_48d170(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    uint32_t result = arg1[1]
    arg1[0x1fa9].b = 1
    
    if (result s< 0x7d0 || result s< 0xbb8)
        result = (*(*data_aca1ec + 0x44))(arg1)
    else if (result s< 0xfa0)
        if (result != 0xbb8)
            sub_489550(result, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\voip.cpp", 0x815, 
                "VoipProcessMessage")
        label_48d2e3:
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        result = sub_4e1a10(arg1)
    else if (result s< 0x1388)
        if (result s> 0xfa1)
            if (result != 0xfa2)
            label_48d2b7:
                uint32_t result_1 = result
                sub_489550(sub_4892e0("unknown http message type %d"), &data_5b2591, "Halt", 
                    "d:\ax\trunk\ax2017\engine\network.cpp", 0x5bd, "HTTPProcessMessage")
                goto label_48d2e3
        else if (result != 0xfa1 && result != 0x3ea && result != 0xfa0)
            goto label_48d2b7
        
        result = (*(*data_aca1ec + 0x44))(arg1)
        
        if (arg1[1] == 0xfa0)
            result = *arg1
            void* edx_1 = data_aca0dc
            
            if (result != 0)
                uint32_t ecx_1 = zx.d(result.w)
                
                if (ecx_1 u< *(edx_1 + 4))
                    int128_t* ecx_3 = ecx_1 * 0x4c + *edx_1
                    
                    if (*(ecx_3 + 0x48) == result)
                        result = sub_48b510(ecx_3)
    else if (result s< 0xf4628)
        result = (*(*data_aca1ec + 0x44))(arg1)
    
    if (arg1[0x1fa9].b == 0)
        return result
    
    char* eax_2 = arg1[0x1fa4]
    var_8 = arg1
    
    if (eax_2 != 0 && eax_2 != &data_5b2591)
        if (data_aca1f4 != 0 && *eax_2 != 0)
            char* eax_3 = sub_48a080(&arg1[0x1fa4])
            int32_t temp0_1 = *(eax_3 + 4)
            *(eax_3 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_3, *(eax_3 + 0xc) + 0x10)
        
        arg1[0x1fa4] = &data_5b2591
    
    return sub_4362d0(data_aca0dc + 0x50, &var_8)
}
