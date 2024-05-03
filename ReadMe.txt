<<--------------------------------------------------------------------Physics_2_Project_01 Scene--------------------------------------------------------------------------->>

Project by Max Sherwin

# I have created a scene where a ball is suspended on a platform and can interact with 4 chained cubes hanging from top. The ball is controlled by the user. Contols are given below. 
- The ball is made squishy and is a soft body with verlet integration. 
- The cubes are rigid and the chains are a bit elastic to be able to move around. I have taken a few top and bottom nodes from each soft body(chains) and connected them together with another soft body by giving them manual bracing constraints. Similarly to the cube. 
- The walls are invisible and the ball cannot fall off the platform. 

## Build : 
	- The solution "Physics_2_Project_01.sln" needs to be built(either in Debug or Release). The project "Physics_Scene" should be set as startup project. Now the project can be run. 

## Controls : 
	- There are camera controls for the user.
	- W,A,S,D,Q,E for camera movement
	- Mouse movement for camera rotation
	- Spacebar to pause and resume mouse mouvement(be default it is set to pause)
	- UP, DOWN, LEFT, RIGHT to move the ball

### Limitations :
	- I haven't really used actual collision response, just a hack for now. Just to push the soft bodies away.	
	- The chains also arent perfect. I still have to explore more on the topic to perfect soft body integration completely.
	- For the controls, I've only added acceleration to the ball. So to keep the ball moving in a direction, the user has to keep holding the direction. It is slow at first but then increases acceleration. 
	- The user can move around with the camera and then contol the ball for a better view.
