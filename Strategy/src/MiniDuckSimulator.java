public class MiniDuckSimulator {
    public static void main(String[] args){
        Duck mallard = new MallardDuck();
        mallard.performFly();
        mallard.perfromQuack();

        Duck modelduck = new ModelDuck();
        modelduck.performFly();
        //modelduck.perfromQuack();
        modelduck.setFlyBehavior(new FlyRocketPowered());
        modelduck.performFly();
    }
}
