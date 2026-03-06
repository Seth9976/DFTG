// 函数名称: sub_4767c0
// 虚拟地址: 0x4767c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4767c0(int32_t* arg1)
{
    // 第一条实际指令: void var_40
    void var_40
    int32_t eax_1 = __security_cookie ^ &var_40
    int32_t eax_2 = *arg1
    
    if (eax_2 u> 3)
        sub_489550(eax_2, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
            0x71a1, "OnGfxArrived")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t var_3c[0xc]
    
    switch (eax_2)
        case 0
            if (arg1[0xd] == 3)
                eax_2 = arg1[0xe]
                
                if ((eax_2 == 1 || eax_2 == 0) && arg1[0x77] == 5)
                    data_126be60
                    eax_2 = sub_4c5ce0()
            
            @__security_check_cookie@4(eax_1 ^ &var_40)
            return eax_2
        case 1
            int32_t eax_5 = arg1[4]
            
            if (eax_5 == 1)
                sub_4c5670(data_126bdf4, &var_3c)
                int32_t eax_6 = sub_4c5920(&var_3c)
                @__security_check_cookie@4(eax_1 ^ &var_40)
                return eax_6
            
            if (eax_5 == 4)
                data_126bdf8
                int32_t eax_7 = sub_4c5ce0()
                @__security_check_cookie@4(eax_1 ^ &var_40)
                return eax_7
            
            if (eax_5 != 2)
                data_126bdf0
                int32_t eax_9 = sub_4c5ce0()
                @__security_check_cookie@4(eax_1 ^ &var_40)
                return eax_9
            
            data_126bdfc
            int32_t eax_8 = sub_4c5ce0()
            @__security_check_cookie@4(eax_1 ^ &var_40)
            return eax_8
        case 2
            int32_t (* edx)[0xc] = &var_3c
            
            if (arg1[0x12] != 0)
                sub_4c5670(data_126be54, edx)
                int32_t eax_4 = sub_4c5920(&var_3c)
                @__security_check_cookie@4(eax_1 ^ &var_40)
                return eax_4
            
            sub_4c5670(data_126be58, edx)
            int32_t eax_3 = sub_4c5920(&var_3c)
            @__security_check_cookie@4(eax_1 ^ &var_40)
            return eax_3
        case 3
            eax_2 = arg1[0x16]
            
            if (eax_2 == 1)
                sub_4c5670(data_126be80, &var_3c)
                int32_t eax_10 = sub_4c5920(&var_3c)
                @__security_check_cookie@4(eax_1 ^ &var_40)
                return eax_10
            
            if (eax_2 != 0)
                @__security_check_cookie@4(eax_1 ^ &var_40)
                return eax_2
            
            data_126be74
            int32_t eax_11 = sub_4c5ce0()
            @__security_check_cookie@4(eax_1 ^ &var_40)
            return eax_11
}
