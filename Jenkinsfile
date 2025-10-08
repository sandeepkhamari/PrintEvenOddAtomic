pipeline {
    agent any
    stages {
        stage('Build') {
            steps {
                echo 'Building...'
            bat '''
                call "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Auxiliary\\Build\\vcvars64.bat"

                echo "============== Checking tools ========================"

                where nmake

                where cl

                '''
            }
        }
        stage('Run Executable'){ 
           steps{
            echo 'Running the executable...'
           }
        }
        stage('Test') {
            steps {
                echo 'Testing...'
            }
        }
    }
}