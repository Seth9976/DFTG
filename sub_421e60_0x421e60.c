// 函数名称: sub_421e60
// 虚拟地址: 0x421e60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_421e60(void* arg1)
{
    // 第一条实际指令: void* result = *(arg1 + 0x82c)
    void* result = *(arg1 + 0x82c)
    
    if (result != 0)
        int32_t* ecx = *(arg1 + 0x828)
        
        if (ecx != 0)
            sub_4274a0(ecx)
            result = *(arg1 + 0x82c)
            *(arg1 + 0x828) = 0
    
    *(arg1 + 0x82c) = 0
    char const* const var_14
    int32_t var_10
    char const* const __saved_edi
    char* ecx_7
    
    if (result u> 7)
        __saved_edi = "GameQueueStartUpdate"
        var_10 = 0x5fe
        var_14 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameclient.cpp"
        ecx_7 = "Halt"
    else
        switch (result)
            case nullptr
                return result
            case 1
                sub_4361a0(0)
                data_62b1a8 = 0x21
                sub_4361a0(3)
                sub_421d10(0xffffffff)
                return ___std_fs_remove@4() __tailcall
            case 2
                sub_4361a0(0)
                data_62b1a8 = 0x21
                sub_4361a0(3)
                sub_421bc0()
                return ___std_fs_remove@4() __tailcall
            case 3
                sub_4361a0(0)
                data_62b1a8 = 0x21
                result = sub_4361a0(3)
                
                if (*(arg1 + 0x834) != 0)
                    result = sub_421df0()
                
                void* ebx_1 = data_6cfe4c
                
                if (ebx_1 != 0)
                    *(ebx_1 + 0x834) = 1
                    int32_t eax_4 = *(sub_437f10(*(data_6d00d8 + 0xbe4)) + 0x244)
                    *(ebx_1 + 0x838) = eax_4
                    *(ebx_1 + 0x868) = eax_4
                    sub_438ea0(ebx_1 + 0x834, ebx_1 + 0x868)
                    sub_45d9c0(ebx_1 + 0x868, 0x5b4f8c)
                    return ___std_fs_remove@4() __tailcall
                
            label_421f4e:
                __saved_edi = "GetClient"
                var_10 = 0x75
                var_14 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
                ecx_7 = "gClient"
            case 4
                sub_4361a0(0)
                data_62b1a8 = 0x21
                sub_4361a0(3)
                
                if (*(arg1 + 0x834) != 0)
                    sub_421df0()
                
                sub_421900(*(arg1 + 0x840))
                return ___std_fs_remove@4() __tailcall
            case 5
                result = data_6cfe4c
                
                if (result == 0)
                    goto label_421f4e
                
                if (*(result + 0x834) == 1 && *(result + 0x838) == 0x7fffffff)
                    sub_4361a0(1)
                    sub_4361a0(0)
                    data_62b220 = 0x1f
                    data_62b1a8 = 2
                    return sub_421df0() __tailcall
                
                int32_t esi_1 = *(sub_41c5b0() + 0x834)
                sub_4361a0(0)
                data_62b220 = 0x11
                
                if (esi_1 != 2)
                    data_62b220 = 3
                
                data_62b1a8 = 2
                return sub_421df0() __tailcall
            case 6
                sub_4361a0(0)
                data_62b1a8 = 2
                data_62b220 = 3
                return sub_421df0() __tailcall
            case 7
                sub_421df0()
                sub_421d10(0xffffffff)
                return ___std_fs_remove@4() __tailcall
    
    sub_489550(result, &data_5b2591, ecx_7, var_14, var_10, __saved_edi)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
