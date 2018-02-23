/**
* THIS IS THE HEADER DECLARATION FILE WHERE WE TELL THE C++ COMPILER THE
* NAMES OF THE FUNCTIONS, METHODS, STORAGE SPACES, AND VARIABLES THIS CLASS WILL USE
*/

#pragma once

//convenient place for constants we want to access anywhere
#include "defines.h"

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CodeHUD.generated.h"
/**
 *
 */
UCLASS()
class CODEPROJECT_API ACodeHUD : public AHUD
{
	//SADLY WE MUST PRETEND THAT THE RED SQUIGLE DOES NOT EXIST. THIS IS NOT AN ERROR
	//SIMPLY ANY VALID CHANGE ABOVE CAN CAUSE THIS LINE TO APPEAR AS AN ERROR
	//IN THE "INTELESENSE" CODE COMPLETION MODULE. 
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "DrawAlgorithms")
	void drawRandomWalker();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int screenX;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int screenY;

	
};
