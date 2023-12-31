// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Modern_BP_Libary.generated.h"

/**
 * 
 */
UCLASS()
class CONFIGMANAGER_API UModern_BP_Libary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
};


/*
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UCLASS()
class UGetSystemInformationBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

		UFUNCTION(BlueprintCallable, meta = (DisplayName = "GET RAM In GB", Keywords = "Get RAM"), Category = "Hardware_Info")
		static float GetRAMEnd();
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GET CPU OEMID", Keywords = "Get CPU OEMID"), Category = "Hardware_Info")
		static float GetCPUEndOEMID();
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GET CPU Number Of Processor", Keywords = "Get CPU Number Of Processor"), Category = "Hardware_Info")
		static int GetCPUEndNumberOfProcessor();
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GET CPU Processor type", Keywords = "GET CPU Processor type"), Category = "Hardware_Info")
		static FString GetCPUEndProcessorType();
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GET CPU Minimum Application Address", Keywords = "GET CPU Minimum Application Address"), Category = "Hardware_Info")
		static int GetCPUEndMinimumApplicationAddres();
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GET CPU Maximum Application Address", Keywords = "GET CPU Maximum Application Address"), Category = "Hardware_Info")
		static int GetCPUEndMaximumApplicationAddres();
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GET CPU Active Processor Mask", Keywords = "GET CPU Active Processor Mask"), Category = "Hardware_Info")
		static int GetCPUEndActiveProcessorMask();
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GET Windows Version", Keywords = "GET Windows Version"), Category = "Hardware_Info")
		static float GetCPUEndWindowsVersion();
	//Bag. For Windows 10 get Widows 8.
	//Oh Now bug is over..... :)))
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GET Disk Space", Keywords = "GET Disk Space"), Category = "Hardware_Info")
		static float GetDISKSpace();
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GET Number Videocard", Keywords = "GET Number Videocard"), Category = "Hardware_Info")
		static int GetNumberVideocard();
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GET Name Videocard", Keywords = "GET Name Videocard"), Category = "Hardware_Info")
		static FString GetVideocardName(int number);
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GET Name CPU", Keywords = "GET Name CPU"), Category = "Hardware_Info")
		static FString GetCPUName();

	UFUNCTION(BlueprintCallable, Category = "Files")
		static FString K2ReadTextFile(FString filePath);


};