pipeline {
    agent any
    stages {
        stage('Build') {
            steps {
                echo 'Building...'
                mkdir build
                cd build
                cmake -S.. -B.
                cmake --build .
            }
        }
        stage('Test') {
            steps {
                echo 'Testing...'
            }
        }
    }
}